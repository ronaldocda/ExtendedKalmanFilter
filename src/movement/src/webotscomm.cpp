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


int main(int argc, char **argv) {
    
    int oamOfmSpeed[2];
  double speed[2];

  int stepMax = 1;
  int nStep = 0;
  ros::init(argc, argv, "tcc_test", ros::init_options::AnonymousName);
  ros::NodeHandle n;
    ROS_INFO("DAAAAAAAAAAAALEEEE"); 


 // Wait for the `ros` controller.

  ros::spinOnce();



  // send robot time step to webots


  std::vector<ros::ServiceClient> enableDistSensorClient;
  movement::set_int enableDistSensorSrv;


  ros::ServiceClient rightWheelPositionClient = n.serviceClient<movement::set_float>(std::string("tcc_test/")+ std::string("/right_wheel_motor/set_position"));
  ros::ServiceClient leftWheelPositionClient = n.serviceClient<movement::set_float>("/left_wheel_motor/set_position");
   movement::set_float wheelSrv;
     wheelSrv.request.value = 1000;
  leftWheelPositionClient.call(wheelSrv);

  rightWheelPositionClient.call(wheelSrv);


}