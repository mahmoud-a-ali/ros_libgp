# ros_libgp
A ros-wrapper for the [libgp][]; a C++ library for Gaussian process regression. the goal of this wrapper/package is to have a ready-to-run ros package that uses [libgp][]. with this package you can subscribe for a ros topic to `get` the data to train the GP, then you can `predict` the GPP output at differetn inputs, and finally you can `publish` the prediction results to another ros topic.

# Dependencies
- [my libgp-fork][]: this fork of libgp has all the header files updates to reflect the new location of the libgp in the ros package 
- eigen3
# Install
- Create catkin workspace
```bash
$ mkdir -p gp_ws/src
$ cd gp_ws/src
```
- Clone ros_libgp package using the `--recurse-submodules` option, this option will clone both the `ros_libgp` and [my libgp-fork][] 
```bash
$ git clone --recurse-submodules https://github.com/mahmoud-a-ali/ros_libgp.git
```
- Compile workspace (either using `catkin build` or `catkin_make`)
```bash
# change directory to workspace "gp_ws"
$ cd ..   
# compile
$ catkin build    
# source the workspace
$ source devel/setup.bash  
```
- Run gp_node
```bash
# in one terminal run ros master
$ roscore
# in another terminal run the gp_node
$ rosrun ros_libgp gp_node
```





[libgp]: https://github.com/mblum/libgp
[my libgp-fork]: https://github.com/mahmoud-a-ali/libgp
