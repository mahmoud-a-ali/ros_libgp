#include <iostream>
#include <ros/ros.h>

#include <libgp/include/gp.h>
#include <Eigen/Dense>

#include <math.h> 


using namespace libgp;



int main(int argc, char **argv) {
  //Initiate the ROS system and become a node.
  ros::init(argc, argv, "gp_node");
  ros::NodeHandle nh;

  ROS_INFO("gp_ros started");

  //initial gp
  GaussianProcess gp(2, "CovSum ( CovSEiso, CovNoise)");
  Eigen::VectorXd params(gp.covf().get_param_dim());
  params << 0.0, 0.0, -2.0;
  // set parameters of covariance function
  gp.covf().set_loghyper(params);

  ROS_INFO("gp initilaized ");

  ros::spin();

  return 0;
}