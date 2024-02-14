#!bin/sh
colcon build --symlink-install
. install/setup.bash
ros2 launch choirbot_examples formationcontrol.launch.py use_sim_time:=Truelaunch 
