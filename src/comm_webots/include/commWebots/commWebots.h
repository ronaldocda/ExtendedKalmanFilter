#ifndef COMMWEBOTS_H
#define COMMWEBOTS_H

#include "ros/ros.h"

#include <tcc_msg/set_int.h>
#include <tcc_msg/get_float.h>
#include <tcc_msg/set_float.h>
#include <tcc_msg/set_int.h> 
#include <std_msgs/Bool.h> 
#include <tcc_msg/SendPositonCommPy.h>
#include <tcc_msg/sendPosPy2Webots.h>
#include <sensor_msgs/Range.h>
#include <signal.h>
#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/String.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt8MultiArray.h>
#include <cstdlib>
#include <vector>

#define numLegMotors 12
#define numBodyMotors 8



class CommWebots
{
public:
    CommWebots(ros::NodeHandle nh_);
    ~CommWebots();
    double dt;
    std::vector<std::string> body_motor_name = {"ShoulderR","ShoulderL","ArmUpperR","ArmUpperL","ArmLowerR","ArmLowerL","Neck","Head"};
    std::vector<std::string> leg_motor_name = {"PelvYR","PelvYL","PelvR","PelvL","LegUpperR","LegUpperL","LegLowerR","LegLowerL","AnkleR","AnkleL","FootR","FootL"};
    std::vector<float> leg_motors_pos;
    std::vector<float> body_motors_pos;
    float send_leg_pos[numLegMotors];
    float send_body_pos[numBodyMotors];

 
    
     // int [20]; // vetor para juntar as posições do motor

private:

    ros::NodeHandle nh;
    std::vector<ros::ServiceClient> getLegposition;
    std::vector<ros::ServiceClient> getBodyposition;
    std::vector<ros::ServiceClient> setBodyposition;
    
    ros::ServiceClient setPelvYR;
    ros::ServiceClient setPelvYL;
    ros::ServiceClient setPelvR;
    ros::ServiceClient setPelvL;
    ros::ServiceClient setLegUpperR;
    ros::ServiceClient setLegUpperL;
    ros::ServiceClient setLegLowerR;
    ros::ServiceClient setLegLowerL;
    ros::ServiceClient setAnkleR;
    ros::ServiceClient setAnkleL;
    ros::ServiceClient setFootR;
    ros::ServiceClient setFootL;

    ros::ServiceClient enableAccel;
    ros::ServiceClient enableGyro;
    ros::ServiceClient enableInit;
    
    ros::Subscriber sendPositions;
    
    ros::ServiceServer send2commPyLeg;
    ros::Subscriber send2WebotsBody;
    ros::ServiceServer send2commPyBody;

    ros::Subscriber accelPub;
    ros::Subscriber gyroPub;
    ros::Subscriber inertialPub;

    tcc_msg::SendPositonCommPy positions;
    tcc_msg::get_float pos;
    tcc_msg::set_float setPos;
    tcc_msg::set_int enableSensor;
   
   
    
    //Get_Motor_Pos by Sensor

    ros::ServiceClient ShoulderR_Sensor_Pos;
    ros::ServiceClient ShoulderL_Sensor_Pos;
    ros::ServiceClient ArmUpperR_Sensor_Pos;
    ros::ServiceClient ArmUpperL_Sensor_Pos;
    ros::ServiceClient ArmLowerR_Sensor_Pos;
    ros::ServiceClient ArmLowerL_Sensor_Pos;
    ros::ServiceClient PelvYR_Sensor_Pos;
    ros::ServiceClient PelvYL_Sensor_Pos;
    ros::ServiceClient PelvR_Sensor_Pos;
    ros::ServiceClient PelvL_Sensor_Pos;
    ros::ServiceClient LegUpperR_Sensor_Pos;
    ros::ServiceClient LegUpperL_Sensor_Pos;
    ros::ServiceClient LegLowerR_Sensor_Pos;
    ros::ServiceClient LegLowerL_Sensor_Pos;
    ros::ServiceClient AnkleR_Sensor_Pos;
    ros::ServiceClient AnkleL_Sensor_Pos;
    ros::ServiceClient FootR_Sensor_Pos;
    ros::ServiceClient FootL_Sensor_Pos;
    ros::ServiceClient Neck_Sensor_Pos;
    ros::ServiceClient Head_Sensor_Pos;

    bool getLegMotorsPosition(tcc_msg::SendPositonCommPy::Request &req,tcc_msg::SendPositonCommPy::Response &res);
    bool getBodyMotorsPosition(tcc_msg::SendPositonCommPy::Request &req,tcc_msg::SendPositonCommPy::Response &res);
    
    void setSakuraWalk(const tcc_msg::sendPosPy2Webots::ConstPtr& positions);

    void enableGyrometer(const std_msgs::Bool::ConstPtr &rqt);
    void enableAccelerometer(const std_msgs::Bool::ConstPtr &rqt);
    void enableInertial(const std_msgs::Bool::ConstPtr &rqt);
    
    void setBodyMotorsPosition(const tcc_msg::sendPosPy2Webots::ConstPtr& rqt);
};

#endif