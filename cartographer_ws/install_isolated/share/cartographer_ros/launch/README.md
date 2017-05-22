# ROS Cartographer Launchfiles

## Recording
```roslaunch cartographer_ros record.launch```

Robot file will be in ~/.ros/robot_bag_<DATE>.bag

## Playback
### With odometry
```roslaunch cartographer_ros playback_mit_odometrie.launch bag_filename:=~/.ros/robot_bag_<DATE>.bag```
### Without odometry
```roslaunch cartographer_ros playback_ohne_odometrie.launch bag_filename:=~/.ros/robot_bag_<DATE>.bag```

## Live-Scan
```roslaunch cartographer_ros scan.launch```
