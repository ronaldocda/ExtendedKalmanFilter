#include "commWebots/commWebots.h"

CommWebots::CommWebots(ros::NodeHandle nh_): nh(nh_)
{   
    

    gyroPub = nh.subscribe<std_msgs::Bool>("/commWebots/EnableGyro",10,&CommWebots::enableGyrometer,this);
    accelPub = nh.subscribe<std_msgs::Bool>("/commWebots/EnableAccel",10,&CommWebots::enableAccelerometer,this);
    inertialPub = nh.subscribe<std_msgs::Bool>("/commWebots/EnableInertial",10,&CommWebots::enableInertial,this);

    sendPositions = nh.subscribe<tcc_msg::sendPosPy2Webots>("/commWebots/Walk",100, &CommWebots::setSakuraWalk,this);

    setPelvYR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/PelvYR/set_position",true);
    setPelvYL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/PelvYL/set_position",true);
    setPelvR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/PelvR/set_position",true);
    setPelvL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/PelvL/set_position",true);
    setLegUpperR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/LegUpperR/set_position",true);
    setLegUpperL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/LegUpperL/set_position",true);
    setLegLowerR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/LegLowerR/set_position",true);
    setLegLowerL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/LegLowerL/set_position",true);
    setAnkleR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/AnkleR/set_position",true);
    setAnkleL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/AnkleL/set_position",true);
    setFootR = nh.serviceClient<tcc_msg::set_float>("/SAKURA/FootR/set_position",true);
    setFootL = nh.serviceClient<tcc_msg::set_float>("/SAKURA/FootL/set_position",true);

    enableGyro = nh.serviceClient<tcc_msg::set_int>("/SAKURA/Gyro/enable",true);
    enableAccel = nh.serviceClient<tcc_msg::set_int>("/SAKURA/Accelerometer/enable",true);
    enableInit = nh.serviceClient<tcc_msg::set_int>("/SAKURA/Inertial_Unit/enable",true);
   
    send2commPyLeg = nh.advertiseService("/commWebots/leg_Positions",&CommWebots::getLegMotorsPosition,this);
    send2WebotsBody = nh.subscribe<tcc_msg::sendPosPy2Webots>("/commWebots/body_receivepos",1000, &CommWebots::setBodyMotorsPosition,this);
    send2commPyBody = nh.advertiseService("/commWebots/body_Positions",&CommWebots::getBodyMotorsPosition,this);
   
     
    
}

CommWebots::~CommWebots(){}

bool CommWebots::getLegMotorsPosition(tcc_msg::SendPositonCommPy::Request &req,tcc_msg::SendPositonCommPy::Response &res)
{
    int i;
    if(!req.ask)
     for (i = 0; i < numLegMotors; i++)
     {         
         getLegposition.push_back(nh.serviceClient<tcc_msg::get_float>(std::string("/SAKURA/")+std::string(leg_motor_name[i])+std::string("/get_target_position"))); 
         pos.request.ask = true;
         if(getLegposition[i].call(pos))
         {
             // ROS_INFO_STREAM("Motor name " << name_motors[i]);
             leg_motors_pos.push_back(pos.response.value);
            //  ROS_INFO("Motor name %f",motors_pos[i]);
         }
         else
         {
             ROS_ERROR("Failed to call service to GET position");      
        
         }
     }
     else 
     {  
        
        ROS_ERROR("Did not Ask for positions");
     }
    res.positions = leg_motors_pos;
    return true;
     
}
bool CommWebots::getBodyMotorsPosition(tcc_msg::SendPositonCommPy::Request &req,tcc_msg::SendPositonCommPy::Response &res)
{
    int i;
    if(!req.ask)
     for (i = 0; i < numBodyMotors; i++)
     {         
         getBodyposition.push_back(nh.serviceClient<tcc_msg::get_float>(std::string("/SAKURA/")+std::string(body_motor_name[i])+std::string("/get_target_position"))); 
         pos.request.ask = true;
         if(getBodyposition[i].call(pos))
         {
             // ROS_INFO_STREAM("Motor name " << name_motors[i]);
             body_motors_pos.push_back(pos.response.value);
            //  ROS_INFO("Motor name %f",motors_pos[i]);
         }
         else
         {
            ROS_ERROR("Failed to call service to GET position");      
        
         }
     }
     else 
     {  
        
        ROS_ERROR("Did not Ask for positions");
     }
    res.positions = body_motors_pos;
    return true;
     
}

void CommWebots::enableAccelerometer(const std_msgs::Bool::ConstPtr &rqt)
{   
    bool datas = true;
    datas = rqt->data;
    if(!datas){
        enableSensor.request.value = 160;   
        if(enableAccel.call(enableSensor) && enableSensor.response.success)
        {        
            ROS_INFO("Accelerometer Enable"); 
            
        }   
        else
        {
            ROS_ERROR("Failed Accelerometer Enable");
        
        }     
    }    
    else
        {
            ROS_ERROR("Failed Accelerometer Enable");
        
        } 
}
void CommWebots::enableGyrometer(const std_msgs::Bool::ConstPtr &rqt)
{   
    bool datas = true; 
    datas = rqt->data;
    if(!datas){
        enableSensor.request.value = 160;   
        if(enableGyro.call(enableSensor) && enableSensor.response.success)
        {        
            ROS_INFO("Gyro Enable"); 
            
        }   
        else
        {
            ROS_ERROR("Failed Gyro Enable");
        
        }     
    }    
    else
        {
            ROS_ERROR("Failed Gyro Enable");
        
        } 
}
void CommWebots::enableInertial(const std_msgs::Bool::ConstPtr &rqt)
{   
    bool datas = true;
    datas = rqt->data;
    if(!datas){
        enableSensor.request.value = 160;   
        if(enableInit.call(enableSensor) && enableSensor.response.success)
        {        
            ROS_INFO("Inertial Enable"); 
            
        }   
        else
        {
            ROS_ERROR("Failed Inertial Enable");
        
        }     
    }    
    else
        {
            ROS_ERROR("Failed Inertial Enable");
        
        } 
}

void CommWebots::setSakuraWalk(const tcc_msg::sendPosPy2Webots::ConstPtr& rqt){
    int i; 
    ros::Rate loop_rate(15); 
    setPos.request.value = rqt -> positions[0];
    setPelvYR.call(setPos);
    setPos.request.value = rqt -> positions[1];
    setPelvYL.call(setPos);
    setPos.request.value = rqt -> positions[2];
    setPelvR.call(setPos);
    setPos.request.value = rqt -> positions[3];
    setPelvL.call(setPos);
    setPos.request.value = rqt -> positions[4];
    setLegUpperR.call(setPos);
    setPos.request.value = rqt -> positions[5];
    setLegUpperL.call(setPos);
    setPos.request.value = rqt -> positions[6];
    setLegLowerR.call(setPos);
    setPos.request.value = rqt -> positions[7];
    setLegLowerL.call(setPos);
    setPos.request.value = rqt -> positions[8];
    setAnkleR.call(setPos);
    setPos.request.value = rqt -> positions[9];
    setAnkleL.call(setPos);
    setPos.request.value = rqt -> positions[10];
    setFootR.call(setPos);
    setPos.request.value = rqt -> positions[11];
    setFootL.call(setPos);

     if( setPos.response.success)
    {        
        ROS_INFO("Position Set: %f", rqt->positions[0]); 
        loop_rate.sleep();    
    }   
    else
    {
        ROS_ERROR("Failed to call service to GET position");
    
    }
    
            
}
void CommWebots::setBodyMotorsPosition(const tcc_msg::sendPosPy2Webots::ConstPtr& rqt){
    int i;

    for (i = 0; i < numBodyMotors; i++)
    {   
        setBodyposition.push_back(nh.serviceClient<tcc_msg::set_float>(std::string("/SAKURA/")+std::string(body_motor_name[i])+std::string("/set_position"))); 
        // ROS_INFO_STREAM("Motor name " << body_motor_name[i]);
        setPos.request.value = rqt -> positions[i];
        if(setBodyposition[i].call(setPos) && setPos.response.success)
        {   
            
            ROS_INFO("Position Set");

        }
        else
        {
            ROS_ERROR("Failed to call service to GET position");
      
        }
        

    }   
    
}