


#include <iostream>
#include <tf2/LinearMath/Quaternion.h>


tf2::Quaternion q;
// Create a quaternion from roll/pitch/yaw in radians (0, 0, 0)
q.setRPY(0, 0, 0);
// Print the quaternion components (0, 0, 0, 1)
RCLCPP_INFO(this->get_logger(), "%f %f %f %f",
            q.x(), q.y(), q.z(), q.w());


            
std::cout << q.x(), q.y(), q.z(), q.w() <<std::endl; 