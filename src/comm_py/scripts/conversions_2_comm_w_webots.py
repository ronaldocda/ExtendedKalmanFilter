#!/usr/bin/env python3.8
# -*- coding: utf-8 -*-

import rospy
import numpy as np

from tcc_msg.msg import WalkingPositionsMsg, sendPosPy2Webots
from  tcc_msg.srv import SendPositonCommPy,SendPositonCommPyRequest
TIME_STEP = 0.064

class Conversion2Webots():
    

    def __init__(self):
     
        self.PelvYR = []
        self.PelvYL = []
        self.PelvR = []
        self.PelvL = []
        self.LegUpperR = []
        self.LegUpperL = []
        self.LegLowerR = []
        self.LegLowerL = []
        self.AnkleR = []
        self.AnkleL = []
        self.FootR = []
        self.FootL = []

        rospy.Subscriber('/walk_creator/positions', WalkingPositionsMsg, self.newLegPositionRequest)
        
        self.pub_to_webots = rospy.Publisher('/commWebots/Walk',sendPosPy2Webots,queue_size=1000)
      
        
        self.pub_to_webots_msg = sendPosPy2Webots()    
        
    def writeFile(self,PelvYR,PelvYL,PelvR,PelvL,LegUpperR,LegUpperL,LegLowerR,LegLowerL,AnkleR,AnkleL,FootR,FootL):
         
        self.PelvYR.append(PelvYR)
        self.PelvYL.append(PelvYL)
        self.PelvR.append(PelvR)
        self.PelvL.append(PelvL)
        self.LegUpperR.append(LegUpperR)
        self.LegUpperL.append(LegUpperL)
        self.LegLowerR.append(LegLowerR)
        self.LegLowerL.append(LegLowerL)
        self.AnkleR.append(AnkleR)
        self.AnkleL.append(AnkleL)
        self.FootR.append(FootR)
        self.FootL.append(FootL)

        with open ('/home/ronaldo/Tcc/src/ekf/scripts/MotorPositionNOController.txt','w') as f:
            f.writelines(str(self.PelvYR) +'\n')
            f.writelines(str(self.PelvYL) +'\n')
            f.writelines(str(self.PelvR) +'\n')
            f.writelines(str(self.PelvL) +'\n')
            f.writelines(str(self.LegUpperR) +'\n')
            f.writelines(str(self.LegUpperL) +'\n')
            f.writelines(str(self.LegLowerR) +'\n')
            f.writelines(str(self.LegLowerL) +'\n')
            f.writelines(str(self.AnkleR) +'\n')
            f.writelines(str(self.AnkleL) +'\n')
            f.writelines(str(self.FootR) +'\n')
            f.writelines(str(self.FootL) +'\n')
            
        
    
    def currentMotorsLegCapture(self, msg):

        
        self.current_leg_position 
       
  
    # aprender quais motores eu estou movimentando e separar as msgs

    def newLegPositionRequest(self, msg):
        # r = rospy.Rate(15.625)
        
        # receivePos = rospy.ServiceProxy('/commWebots/leg_Positions', SendPositonCommPy,True)
        # ask = SendPositonCommPyRequest()
        # ask.ask = False 
        # self.leg_positions = receivePos(ask)

        self.pub_to_webots_msg.positions = msg.positions 
        # self.pub_to_webots_msg.velocity = self.calculateNewVelocity(self.leg_positions,self.pub_to_webots_msg.positions)
        self.writeFile(msg.positions[0],msg.positions[1],msg.positions[2],msg.positions[3],msg.positions[4],msg.positions[5],msg.positions[6],msg.positions[7],msg.positions[8],msg.positions[9],msg.positions[10],msg.positions[11])

        self.pub_to_webots.publish(self.pub_to_webots_msg)
     
        # r.sleep()
     
     

    def calculateNewVelocity(self, current_leg_position, new_position):
        velocities = []

        for index, new_pos in enumerate(new_position):
            velocities.append(abs((new_pos-current_leg_position[index])/TIME_STEP))
        
        return velocities

if __name__ == "__main__":
    rospy.init_node('Conversion_to_webots_node', anonymous=False)

    conversion = Conversion2Webots()
    rospy.spin()