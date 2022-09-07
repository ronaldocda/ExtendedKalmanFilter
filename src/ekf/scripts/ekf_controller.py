#!/usr/bin/env python3.8
# -*- coding: utf-8 -*-


import rospy
import numpy as np

from std_msgs.msg import Bool
from sensor_msgs.msg import  Imu
from tcc_msg.msg import EkfController
import time
import math 
import matplotlib as mpl
import matplotlib.pyplot as plt

class EKF():

    def __init__(self):
        #lista para escrever valor
        self.Robot_Values_phi = []
        self.Robot_Values_teta = []
        self.ekf_values_phi = []
        self.ekf_values_teta = []
        self.x = [0]*3
        self.u = [0]*3
        self.z = [0]*3
        #Variaveis Iniciais
        self.x0 = 0
        self.P0 = 0
        
        #sec
        self.T = 0.16
        #Freq
        self.Hz = 1/self.T

        #Euler Angles roll,pitch, e yaw;
        self.phi = []
        self.teta = []
        self.psi = []
        
        # Velocidade angular
        self.p = []
        self.q = []
        self.r = []

        # torso’s acceleration 
        self.ax = []
        self.ay = []
        self.az = []

        #
        #time to interation
        self.start_time = time.time()
        self.current_time = 0

        #Gaussian error
        self.G = [[0],[0],[1]]
        #Covariancia é o gradado do erro 
        self.R = 4e-3 
        self.Q = np.eye(3)*self.R
        self.I = np.eye(3)
        self.g = 9.81992


        self.pub_gyro = rospy.Publisher('/commWebots/EnableGyro',Bool,queue_size=10,latch=True)
        self.pub_accel = rospy.Publisher('/commWebots/EnableAccel',Bool,queue_size=10,latch=True)
        self.pub_init = rospy.Publisher('/commWebots/EnableInertial',Bool,queue_size=10,latch=True)
        self.sub_Gyro = rospy.Subscriber('/SAKURA/Gyro/values',Imu,self.getGyro)
        self.sub_Accel = rospy.Subscriber('/SAKURA/Accelerometer/values',Imu,self.getAccel)
        self.sub_Init = rospy.Subscriber('/SAKURA/Inertial_Unit/quaternion',Imu,self.getInit)
        
        #publish ekf
        self.pub_ekf = rospy.Publisher('/walkCreator/EKF',EkfController,queue_size=10,latch=True)

        self.ekf_msg = EkfController()
        self.enable_msgs = Bool()
        self.rate = rospy.Rate(self.Hz)

        self.updateEFK()
        

    def enableGyro(self):
        
        self.enable_msgs.data = False
        self.pub_gyro.publish(self.enable_msgs)
        self.rate.sleep()            

    def enableAccel(self):
        self.enable_msgs.data = False
        self.pub_accel.publish(self.enable_msgs)
        self.rate.sleep()
    
    def enableInit(self):
        self.enable_msgs.data = False
        self.pub_init.publish(self.enable_msgs)
        self.rate.sleep()

    def getGyro(self,msg):

        self.u[0] = msg.angular_velocity.x
        self.u[1] = msg.angular_velocity.y
        self.u[2] = msg.angular_velocity.z
        #rospy.loginfo(self.u)
        return self.u

    def getAccel(self,msg):

        self.z[0] = msg.linear_acceleration.x
        self.z[1] = msg.linear_acceleration.y
        self.z[2] = msg.linear_acceleration.z
        # rospy.loginfo('accel:')
        # rospy.loginfo(self.z)
        return self.z

    def getInit(self,msg):    
      
        self.x[0] = msg.orientation.x
        self.x[1] = msg.orientation.y
        self.x[2] = msg.orientation.z

        with open ('/home/ronaldo/Tcc/src/ekf/scripts/TorsoAngleNoControler.txt','w') as f:
            self.Robot_Values_phi.append(msg.orientation.x)
            self.Robot_Values_teta.append(msg.orientation.y)
            f.writelines(str(self.Robot_Values_phi) +'\n')
            f.writelines(str(self.Robot_Values_teta) +'\n')
        rospy.loginfo(self.x)
        return self.x

    def startVariables(self):
        self.x0 = np.zeros((3,3))
        self.P0 = np.diag([0,0,0])
        self.Xpri = np.zeros((1,3))

    def compute_Priori(self,phi,teta,psi,T,p,q,r,z,P_Priori):
         
                        
        Xpri = [[phi + T*(p + (q*math.sin(phi) + r*math.cos(phi))*math.tan(teta))],
               [teta +   T*(q*math.cos(phi)-r*math.sin(phi))],
               [psi+T*(q*math.sin(phi)+r*math.cos(phi))*(1/math.cos(teta))]]
    
        Fk = [[1+T*(q*math.cos(phi)-r*math.sin(phi))*math.tan(teta), T*(q*math.sin(phi)+r*math.cos(phi))*pow((1/math.cos(teta)),2),0],
             [-T*(q*math.sin(phi)+r*math.cos(phi)), 1, 0],
             [0, T*math.sin(phi)*(1/math.cos(teta)), T*math.cos(phi)*(1/math.cos(teta))]]
                        
        Lk = [[T, T*math.sin(phi)*math.tan(teta), T*math.cos(phi)*math.tan(teta)],
             [0, T*math.cos(phi), -T*math.sin(phi)],
             [0, T*math.sin(phi)*(1/math.cos(teta)), T*math.cos(phi)*(1/math.cos(teta))]]

        #Equação Transposta 
        Fk_T = np.array(Fk).T
        Lk_T = np.array(Lk).T

        # Matrix covariance Priori
        Ppri = Fk @ P_Priori @ Fk_T + Lk @ self.Q @ Lk_T
        
        Ppri = np.array(Ppri)
        Xpri = np.array(Xpri)
        
        return Xpri,Ppri    


    def compute_Posteriori(self,phi,teta,phi_Pri,teta_Pri,z,x_prior,P_priori):
        
        v = np.random.normal(0,self.R,size=(1, 3))

        hk = [[-self.g*math.sin(teta)],[self.g*math.sin(phi)*math.cos(teta)], [self.g*math.cos(phi)*math.cos(teta)]]    
        
        #não faself.g sentido ter o ruido 'v' no controlador por causa do ruido do IMU
        zk = hk

        Hk = [[0, -self.g*math.cos(teta_Pri), 0],
             [self.g*math.cos(phi_Pri)*math.cos(teta_Pri), -self.g*math.sin(phi_Pri)*math.sin(teta_Pri), 0],
             [-self.g*math.sin(phi_Pri)*math.cos(teta_Pri), -self.g*math.cos(phi_Pri)*math.sin(teta_Pri), 0]] 

        hk_priori  = [[-self.g*math.sin(teta_Pri)],[self.g*math.sin(phi_Pri)*math.cos(teta_Pri)], [z*math.cos(phi_Pri)*math.cos(teta_Pri)]]            
        
        
        
        z = np.array(zk)
        h = np.array(hk)
        H = np.array(Hk)
        hx = np.array(hk_priori)
        Hk_T = np.array(H).T
        Sk = H@P_priori@Hk_T + self.R
        S = np.array(Sk)
        Sk_inv = np.linalg.inv(S) 
        K = P_priori@Hk_T@Sk_inv
        Xk = x_prior + K@(z - h)
        Pk = (self.I - K@Hk)@P_priori

        return Xk,Pk


    def updateEFK (self):
        
        self.enableGyro()
        self.enableAccel()
        self.enableInit()
        
        self.startVariables() 

        while not rospy.is_shutdown():
            self.current_time = time.time()
           
            if  self.current_time - self.start_time >= self.T:
                self.start_time = self.current_time

                #Start variable Euler Angles roll,pitch, e yaw;
                self.phi.append(self.x[0])
                self.teta.append(self.x[1]) 
                self.psi.append(self.x[2])
                
                #Start angular velocity variable;
                self.p.append(self.u[0])
                self.q.append(self.u[1]) 
                self.r.append(self.u[2])

                #Start torso's acceleration variable;
                self.ax.append(self.z[0])
                self.ay.append(self.z[1]) 
                self.az.append(self.z[2])
                rospy.loginfo(self.az)


                if len(self.phi) <= 1 and len(self.p) <= 1 and len(self.ax) <= 1:
                    
                    phi = self.phi[-1]
                    teta = self.teta[-1]
                    psi = self.psi[-1]
                    p = self.p[-1]
                    q = self.q[-1]
                    r = self.r[-1]
                    az = self.az[-1]

                    xf_Priori, Pf_Priori = self.compute_Priori(phi,teta,psi,self.T,p,q,r,az,self.P0)

                    if self.az[-1] > 9.2283325 and self.az[-1] <= 9.81998:
                        
                        xf, Pf = self.compute_Posteriori(phi,teta,xf_Priori[0,0],xf_Priori[1,0],az,xf_Priori,Pf_Priori)  
                        
                        self.ekf_msg.phi = xf[0,0]
                        self.ekf_msg.teta = xf[1,0]
                        self.ekf_msg.psy = xf[2,0]
                        self.pub_ekf.publish(self.ekf_msg)
                           
                        # Atualização dos atributos
                        P_FeedBack = Pf
                        x_FeedBack = xf

                        

                if len(self.phi) > 1 and len(self.p) > 1 and len(self.ax) > 1:
                    
                    phi = np.array(self.phi[-2])
                    teta = np.array(self.teta[-2])
                    psi = np.array(self.psi[-2])
                    p = np.array(self.p[-2])
                    q = np.array(self.q[-2])
                    r = np.array(self.r[-2])
                    az = np.array(self.az[-2])

                    xf_Priori, Pf_Priori = self.compute_Priori(x_FeedBack[0,0],x_FeedBack[1,0],x_FeedBack[2,0],self.T,p,q,r,az,P_FeedBack)

                    if self.az[-1] > 6.5283325 and self.az[-1] <= 11.03998:
                        
                        xf, Pf = self.compute_Posteriori(phi,teta,xf_Priori[0,0],xf_Priori[1,0],az,xf_Priori,Pf_Priori)  
                        
                        with open ('/home/ronaldo/Tcc/src/ekf/scripts/ekfNoControler.txt','w') as f:
                            self.ekf_values_phi.append(xf[0,0])
                            self.ekf_values_teta.append(xf[1,0])
                            f.writelines(str(self.ekf_values_phi) +'\n')
                            f.writelines(str(self.ekf_values_teta) +'\n')


                        self.ekf_msg.phi = xf[0,0]
                        self.ekf_msg.teta = xf[1,0]
                        self.ekf_msg.psy = xf[2,0]
                        self.ekf_msg.p = self.p[-1]
                        self.ekf_msg.q = self.q[-1]
                        self.ekf_msg.r = self.r[-1]
                        self.pub_ekf.publish(self.ekf_msg)
                        self.rate.sleep     
                        # Atualização dos atributos
                        P_FeedBack = Pf
                        x_FeedBack = xf

                        rospy.loginfo (xf)
                        

         

if __name__ == "__main__":

    rospy.init_node('EKF',anonymous=False)

    control_comand = EKF()
    rospy.spin()