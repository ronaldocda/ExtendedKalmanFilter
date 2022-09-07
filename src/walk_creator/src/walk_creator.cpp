#include "walk_creator/walk_creator.h"

std::vector<float> ekf_result = {0,0,0};

bool WalkCreator::walkRequest(tcc_msg::WalkCreatorRequestSrv::Request  &req_params, tcc_msg::WalkCreatorRequestSrv::Response &res)
{

    params.enabledGain = req_params.enabledGain;
    params.stepGain = req_params.stepGain;
    params.lateralGain = req_params.lateralGain;
    params.turnGain = req_params.turnGain;

    res.success = runWalk(params, 5.12, phase, time);

    return res.success;

}

void WalkCreator::subEkf(const tcc_msg::EkfController::ConstPtr& rqt)
{
    ekf_result[0] = rqt->phi;
    ekf_result[1] = rqt->teta;
    ekf_result[2] = rqt->psy;
    ekf_result[3] = rqt -> p;
    ekf_result[4] = rqt -> q;
    ekf_result[5] = rqt -> r;

    ROS_INFO("EKF SUB %f",ekf_result[0]);
}
bool WalkCreator::runWalk(const Rhoban::IKWalkParameters& params, double timeLength, double& phase, double& time)
{

    ros::Rate loop_rate(15);

    for (double t=0.0;t<=timeLength;t+=1.0/engineFrequency) {
        time += 1.0/engineFrequency;
        bool success = Rhoban::IKWalk::walk(params, 1.0/engineFrequency, phase, outputs);

        /*help do jhonão 0.04 */
        ros::spinOnce();

        if (!success) {
        ROS_INFO( " Inverse Kinematics error. Position not reachable." );
            return false;
        } else {


            // deltaHipRoll = -Kphr * (0 - ekf_result[0])- Kvhr * ekf_result[3];
            // deltaAnkleRoll = -Kpar * (0 - ekf_result[0]) - Kvar* ekf_result[3];
            // deltaHipPich = -Kphp * (0 - ekf_result[1])- Kvhp * ekf_result[4];
            // deltaKneePich = -Kpkp * (0 - ekf_result[1])- Kvkp * ekf_result[4];
            // deltaAnklePich = -Kpap * (0 - ekf_result[1])- Kvap * ekf_result[4];

            // outputs.right_hip_roll = outputs.right_hip_roll + deltaHipRoll;
            // outputs.left_hip_roll = outputs.left_hip_roll + deltaHipRoll;

            // outputs.right_ankle_roll = outputs.right_ankle_roll + deltaAnkleRoll;
            // outputs.left_ankle_roll = outputs.left_ankle_roll + deltaAnkleRoll;

            // outputs.right_hip_pitch = outputs.right_hip_pitch + deltaHipPich ;
            // outputs.left_hip_pitch = outputs.left_hip_pitch + deltaHipPich;

            // outputs.right_knee = outputs.right_knee + deltaKneePich;
            // outputs.left_knee = outputs.left_knee + deltaKneePich;

            // outputs.right_ankle_pitch = outputs.right_ankle_pitch - deltaAnklePich;
            // outputs.left_ankle_pitch = outputs.left_ankle_pitch - deltaAnklePich;

            positions.positions = {  outputs.right_hip_yaw, outputs.left_hip_yaw,
                                    -outputs.right_hip_roll, -outputs.left_hip_roll,
                                    -outputs.right_hip_pitch, outputs.left_hip_pitch,
                                    -outputs.right_knee, outputs.left_knee,
                                    outputs.right_ankle_pitch, -outputs.left_ankle_pitch,
                                    outputs.right_ankle_roll, outputs.left_ankle_roll
                                };


            walk_motor_positions_pub.publish(positions);
            loop_rate.sleep();
        }


        ROS_INFO("Joelho_R %f, Joelho_L %f", positions.positions[7], positions.positions[8]);
    }


        // ROS_INFO("enablewalk %f",phase);
    return true;
}

void WalkCreator::enableWalkRequest()
{

    setParam.request.enabledGain = 0.02;
    setParam.request.stepGain = 0.02;
    setParam.request.lateralGain = 0.0;
    setParam.request.turnGain = 0.0;
    response_walk_creation.call(setParam);
}

void WalkCreator::flagChange(const std_msgs::Bool &status)
{
    flag2Publish = status.data;
}

WalkCreator::WalkCreator(ros::NodeHandle nh){


    walk_motor_positions_pub = nh.advertise<tcc_msg::WalkingPositionsMsg>("/walk_creator/positions", 1000,true);
    ekf_controller = nh.subscribe<tcc_msg::EkfController>("/walkCreator/EKF",10,&WalkCreator::subEkf,this);

    params.distHipToKnee = 0.110;
    params.distKneeToAnkle = 0.110;
    params.distAnkleToGround = 0.0337;
    params.distFeetLateral = 0.095;

    // params.freq = 1.7;
    params.freq = 1.3;
    params.enabledGain = 1.0;
    params.supportPhaseRatio = 0.0;
    params.footYOffset = 0.030;
    params.stepGain = 0.04;
    params.riseGain = 0.035;
    params.lateralGain = 0.0;
    params.trunkZOffset = 0.02;
    params.swingGain = 0.02;
    params.swingRollGain = 0.0;
    params.swingPhase = 0.25;
    params.stepUpVel = 4.0;
    params.stepDownVel = 4.0;
    params.riseUpVel = 4.0;
    params.riseDownVel = 4.0;
    params.swingPause = 0.0;
    params.swingVel = 4.0;
    params.trunkXOffset = 0.02;
    params.trunkYOffset = 0.0;
    params.trunkPitch = 0.15;
    params.trunkRoll = 0;
    params.extraLeftX = 0.0;
    params.extraLeftY = 0.0;
    params.extraLeftZ = 0.0;
    params.extraRightX = 0.0;
    params.extraRightY = 0.0;
    params.extraRightZ = 0.0;
    params.extraLeftYaw = 0.0;
    params.extraLeftPitch = 0.0;
    params.extraLeftRoll = 0.0;
    params.extraRightYaw = 0.0;
    params.extraRightPitch = 0.0;
    params.extraRightRoll = 0.0;

    ros::Duration(3).sleep();
    runWalk(params, 10, phase, time);



}

