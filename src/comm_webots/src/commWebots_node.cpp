#include "commWebots/commWebots.h"
#include "ros/ros.h"

int main(int argc, char **argv)
{
    ros::init (argc, argv, "coomWebots",ros::init_options::AnonymousName);
    ros::NodeHandle nh;
    CommWebots commWebots_node(nh);
    ros::spin();
    return 0;
}