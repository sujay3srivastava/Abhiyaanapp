 #include "ros/ros.h"
 #include "std_msgs/String.h"
 #include <sstream>

   void welcomebackCallback(const std_msgs::String::ConstPtr& msg)
    {
      ROS_INFO("I heard: [%s]", msg->data.c_str());
    }
 
    int main(int argc, char **argv)
    {
    
       ros::init(argc, argv, "turtle_exercise");
       ros::NodeHandle n;
 
       ros::Publisher  turtle_exercise = n.advertise<std_msgs::String>("/turtle1/cmd_vel", 1000);
       ros::Subscriber turtle_exercise  = n.subscribe("/turtle1/Pose", 1000, welcomebackCallback);
       ros::Subscriber turtle_exercise = n.subscribe("/abhiyaan/Pose", 1000, welcomebackCallback);
       ros::Subscriber turtle_exercise = n.subscribe("/turtle1/cmd_vel", 1000, welcomebackCallback);
       ros::spin();
   
       return 0;
    }   
    
    
  //i think getting the input regarding current position of both turtle is important input and need to be used to get turtle 1 towards abhiyaan
  //the current speed should be controlled hence we publish to cmd_vel
 //i wasnt able to push the package so i am just pushing the source code for creating a node subscribe/publish to relevant topics  in catkin workspace
//resource list :
//wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
//youtube :Justin huang