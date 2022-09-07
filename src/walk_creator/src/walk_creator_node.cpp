#include "walk_creator/walk_creator.h"
#include "ros/ros.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "Walk_creator_node",ros::init_options::AnonymousName);
    ros::NodeHandle nh;

    WalkCreator WalkCreatorObject(nh);
    ros::spin();
    return 0;
}