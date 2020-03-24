 #include "ros/ros.h"
 #include "std_msgs/String.h"
 #include <sstream>

   void welcomebackCallback(const std_msgs::String::ConstPtr& msg)
    {
      ROS_INFO("I heard: [%s]", msg->data.c_str());
    }
 
    int main(int argc, char **argv)
    {
    
       ros::init(argc, argv, "listener");
       ros::NodeHandle n;
 

       ros::Subscriber listener  = n.subscribe("/welcomeback", 1000, welcomebackCallback);

       ros::spin();
   
       return 0;
    }   
    
    
    
 //i wasnt able to push the package so i am just pushing the source code for creating a node which listens to topic in catkin workspace
//resource list :
//wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
//youtube :Justin huang