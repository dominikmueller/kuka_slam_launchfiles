# ROS Cartographer Launchfiles

## Recording
```roslaunch cartographer_ros record.launch```

Robot file will be in ~/.ros/robot_bag_<DATE>.bag

## Playback
```roslaunch cartographer_ros playback_2d.launch bag_filename:=~/.ros/robot_bag_<DATE>.bag```

It will open rviz and run the cartographer_node.

## Live-Scan
```roslaunch cartographer_ros scan.launch```

and

``` roslaunch cartographer_ros scan_2d.launch```


