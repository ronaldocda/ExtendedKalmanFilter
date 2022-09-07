#include "ros/ros.h"

#include <movement/set_int.h>

#include <movement/set_float.h>

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

// 8 IR proximity sensors
#define NB_DIST_SENS 8
#define PS_RIGHT_00 0
#define PS_RIGHT_45 1
#define PS_RIGHT_90 2
#define PS_RIGHT_REAR 3
#define PS_LEFT_REAR 4
#define PS_LEFT_90 5
#define PS_LEFT_45 6
#define PS_LEFT_00 7

int psValue[NB_DIST_SENS] = {0, 0, 0, 0, 0, 0, 0, 0};
const int PS_OFFSET_SIMULATION[NB_DIST_SENS] = {300, 300, 300, 300, 300, 300, 300, 300};
const int PS_OFFSET_REALITY[NB_DIST_SENS] = {480, 170, 320, 500, 600, 680, 210, 640};

// 3 IR ground color sensors
#define NB_GROUND_SENS 3
#define GS_WHITE 900
#define GS_LEFT 0
#define GS_CENTER 1
#define GS_RIGHT 2
unsigned short gsValue[NB_GROUND_SENS] = {0, 0, 0};

// LEDs
#define NB_LEDS 10

static char modelList[10][100];
static int count = 0;
static int step = TIME_STEP;
double accelerometerValues[3] = {0, 0, 0};
std::vector<unsigned char> image;

ros::ServiceClient setTimeStepClient;
movement::set_int setTimeStepSrv;


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

 // Wait for the `ros` controller.
  ros::service::waitForService("/robot/time_step");
  ros::spinOnce();



  // send robot time step to webots
  setTimeStepClient = n.serviceClient<movement::set_int>("/robot/time_step");
  setTimeStepSrv.request.value = step;

  std::vector<ros::ServiceClient> enableDistSensorClient;
  movement::set_int enableDistSensorSrv;

  if (setTimeStepClient.call(setTimeStepSrv))
    nStep++;
  else
    ROS_ERROR("Failed to call service time_step to update robot's time step.");
    speed[LEFT] = 0;
    speed[RIGHT] = 0;
   // set the motors to veloctiy control
  movement::set_float wheelSrv;
  ros::ServiceClient leftWheelPositionClient = n.serviceClient<movement::set_float>("/left_wheel_motor/set_position");
  ros::ServiceClient rightWheelPositionClient = n.serviceClient<movement::set_float>("/right_wheel_motor/set_position");


  while (nStep <= stepMax) {

      if (setTimeStepClient.call(setTimeStepSrv) && setTimeStepSrv.response.success)
        nStep++;
      else
        ROS_ERROR("Failed to call service time_step to update robot's time step.");


    
      ROS_INFO("Let pick uo this motor.");
      speed[LEFT] = 1000;
      speed[RIGHT] = 1000;
    
      wheelSrv.request.value = 50;
      leftWheelPositionClient.call(wheelSrv);
      wheelSrv.request.value = 50;
      rightWheelPositionClient.call(wheelSrv);

  }

  setTimeStepSrv.request.value = 0;
    if (setTimeStepClient.call(setTimeStepSrv) && setTimeStepSrv.response.success)
      ROS_INFO("Robot's time step updated to end simulation.");
    else
      ROS_ERROR("Failed to call service time_step to end simulation.");
    ros::shutdown();
    return 0;
    
  
}