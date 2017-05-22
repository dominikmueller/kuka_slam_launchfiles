# kuka_slam_launchfiles

## Setup
Copy the folders to the corresponding ROS-Directory (e.g. /opt/ros/indigo/share/). Take care of the ownerships and rights.

## Launchfiles
There are several Launchfiles inside the launch-Directories of the packages.

## Recording a Bagfile
Use the record.launch-File to record the data captured by kuka youBot. Run the teleopkeyboard.py-Script in youbot_driver to control the youBot.

## Modifications
There are modificated urdf-Files inside youbot_description. They change the namings of the frames. So check that you're using the correct urdf-files or fix the frame-mapping.

## Cartographer ROS
### Bagfile with odometry
```roslaunch cartographer_ros playback_mit_odometrie.launch bag_filename:=<PATH_TO_BAGFILE>```

### Bagfile without odometry
```roslaunch cartographer_ros playback_mit_odometrie.launch bag_filename:=<PATH_TO_BAGFILE>```

### Live-SLAM with odometry
```roslaunch cartographer_ros scan.launch```

## Hector SLAM
```roslaunch hector_slam_launch hector.launch bag_filename:=<PATH_TO_BAGFILE>```

## GMapping SLAM
```roslaunch gmapping_launch gmapping.launch bag_filename:=<PATH_TO_BAGFILE>```
