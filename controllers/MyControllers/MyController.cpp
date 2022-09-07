#include "ros/ros.h"

#include <webots_ros/set_int.h>

#include <webots_ros/set_float.h>

#include <sensor_msgs/Range.h>

#include <signal.h>
#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/String.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt8MultiArray.h>
#include <cstdlib>


// Global defines
#define TRUE 1
#define FALSE 0
#define NO_SIDE -1
#define LEFT 0
#define RIGHT 1
#define WHITE 0
#define BLACK 1
#define SIMULATION 0  // for wb_robot_get_mode() function
#define REALITY 2     // for wb_robot_get_mode() function
#define TIME_STEP 32  // [ms]

static char modelList[10][100];
static int count = 0;
static int step = TIME_STEP;
double accelerometerValues[3] = {0, 0, 0};
std::vector<unsigned char> image;

ros::ServiceClient setTimeStepClient;
webots_ros::set_int setTimeStepSrv;


void quit(int sig) {
  setTimeStepSrv.request.value = 0;
  setTimeStepClient.call(setTimeStepSrv);
  ROS_INFO("User stopped the 'e_puck_line' node.");
  ros::shutdown();
  exit(0);
}

int main(int argc, char **argv) {
 
  int i;
  int oamOfmSpeed[2];
  double speed[2];

  int stepMax = 1;
  int nStep = 0;


 if (argc < 2) {
    ROS_INFO("Usage: $ e_puck_line [duration(seconds)].");
    return 1;
  }
  stepMax = atoll(argv[1]) * 1000 / TIME_STEP;
  ROS_INFO("Max step is %d.", stepMax);

  ros::init(argc, argv, "e_puck_line", ros::init_options::AnonymousName);
  ros::NodeHandle n;
signal(SIGINT, quit);

ros::service::waitForService("/robot/time_step");
ros::spinOnce();

 std::vector<ros::ServiceClient> enableDistSensorClient;
  webots_ros::set_int enableDistSensorSrv;

  if (setTimeStepClient.call(setTimeStepSrv) && setTimeStepSrv.response.success)
    nStep++;
  else
    ROS_ERROR("Failed to call service time_step to update robot's time step."); std::vector<ros::ServiceClient> enableDistSensorClient;
  webots_ros::set_int enableDistSensorSrv;

  if (setTimeStepClient.call(setTimeStepSrv) && setTimeStepSrv.response.success)
    nStep++;
  else
    ROS_ERROR("Failed to call service time_step to update robot's time step.");

   // set the motors to veloctiy control
  webots_ros::set_float wheelSrv;
  wheelSrv.request.value = INFINITY;
  ros::ServiceClient leftWheelPositionClient = n.serviceClient<webots_ros::set_float>("/left_wheel_motor/set_position");
  leftWheelPositionClient.call(wheelSrv);
  ros::ServiceClient rightWheelPositionClient = n.serviceClient<webots_ros::set_float>("/right_wheel_motor/set_position");
  rightWheelPositionClient.call(wheelSrv);
  ros::ServiceClient leftWheelVelocityClient = n.serviceClient<webots_ros::set_float>("/left_wheel_motor/set_velocity");
  ros::ServiceClient rightWheelVelocityClient = n.serviceClient<webots_ros::set_float>("/right_wheel_motor/set_velocity");

    speed[LEFT] = 50;
      speed[RIGHT] = 50;

  wheelSrv.request.value = (M_PI / 1000.0) * speed[LEFT];
    leftWheelVelocityClient.call(wheelSrv);
    wheelSrv.request.value = (M_PI / 1000.0) * speed[RIGHT];
    rightWheelVelocityClient.call(wheelSrv);

 setTimeStepSrv.request.value = 0;
  if (setTimeStepClient.call(setTimeStepSrv) && setTimeStepSrv.response.success)
    ROS_INFO("Robot's time step updated to end simulation.");
  else
    ROS_ERROR("Failed to call service time_step to end simulation.");
  ros::shutdown();
  return 0;

 return 0;
}