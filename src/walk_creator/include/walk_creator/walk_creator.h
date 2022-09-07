#ifndef WALK_CREATORH
#define WALK_CREATORH

#include "../include/IKWalk.hpp"
#include "ros/ros.h"
#include "tcc_msg/EkfController.h"
#include "tcc_msg/WalkingPositionsMsg.h"
#include "tcc_msg/WalkCreatorRequestSrv.h"
#include "std_msgs/Bool.h"
#include "tcc_msg/WalkingPositionsMsg.h"



class WalkCreator
{
    public:
        WalkCreator(ros::NodeHandle nh);

        double dt;
        bool walkRequest(tcc_msg::WalkCreatorRequestSrv::Request  &req_params, tcc_msg::WalkCreatorRequestSrv::Response &res);
        bool runWalk(const Rhoban::IKWalkParameters& params, double timeLength, double& phase, double& time);
        void flagChange(const std_msgs::Bool &status);
        void subEkf(const tcc_msg::EkfController::ConstPtr &rqt);
        void enableWalkRequest();

        tcc_msg::WalkingPositionsMsg positions;
        tcc_msg::WalkCreatorRequestSrv setParam;  

        struct Rhoban::IKWalkParameters params;
        struct Rhoban::IKWalkOutputs outputs;

        double engineFrequency = 15;
        double phase = 0.0;
        double time = 0.0;
        bool flag2Publish = true;
        std::vector<float> ekf_result = {0,0,0};

        //Ganhos ekf
        float deltaHipRoll;
        float deltaAnkleRoll;
        float deltaHipPich;
        float deltaKneePich;
        float deltaAnklePich;
        //Talvez diminuir os ganhos no ankle
        
        // float Kphr = 0.075;
        // float Kvhr = 0.025;
        // float Kpar = 0.125;
        // float Kvar = 0.06;
        // float Kphp = 0.095;
        // float Kvhp = 0.025;
        // float Kpkp = 0.065;  
        // float Kvkp = 0.003; 
        // float Kpap = 0.23;
        // float Kvap = 0.09;   
         
        // float Kphr = 0.08;
        // float Kvhr = 0.0175;
        // float Kpar = 0.095;
        // float Kvar = 0.015;
        // float Kphp = 0.105;
        // float Kvhp = 0.04;
        // float Kpkp = 0.035;  
        // float Kvkp = 0.003; 
        // float Kpap = 0.2;
        // float Kvap = 0.04;   

        float Kphr = 0.08;
        float Kvhr = 0.0125;
        float Kpar = 0.05   ;
        float Kvar = 0.0085;
        float Kphp = 0.3;
        float Kvhp = 0.04;
        float Kpkp = 0.1;  
        float Kvkp = 0.003; 
        float Kpap = 0.24;
        float Kvap = 0.04; 

        ros::Publisher walk_motor_positions_pub;
        ros::ServiceServer request_walk_creation;
        ros::ServiceClient response_walk_creation;
        ros::Subscriber flag_to_publish_positions_sub;
        ros::Subscriber ekf_controller;
};


#endif

