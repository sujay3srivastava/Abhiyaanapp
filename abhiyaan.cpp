
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>
int main(int argc, char** argv)
 {
  
          ros::init(argc, argv, "abhiyaan");
   
          ros::NodeHandle n;
    
          ros::Publisher Messenger = n.advertise<std_msgs::String>("/welcome_message", 1000);
    
          ros::Rate loop_rate(10);
    
           int count = 0;
           
       while (ros::ok())
           {
      
            std_msgs::String msg;
        
            std::stringstream ss;
            ss << "Welcome to Abhiyaan" << count;
            msg.data = ss.str();
        
            ROS_INFO("%s", msg.data.c_str());
       
            Messenger.publish(msg);
       
            ros::spinOnce();
       
            loop_rate.sleep();
            ++count;
          }
    
        
      return 0;
  }



//i wasnt able to push the package so i am just pushing the source code for creating a node in catkin workspace
//resource list :
//wiki.ros.org/ROS/Tutorials/WritingPublisherSubscriber%28c%2B%2B%29
//youtube :Justin huang