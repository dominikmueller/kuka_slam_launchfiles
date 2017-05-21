# CMake generated Testfile for 
# Source directory: /home/youbot/catkin_ws/src/cartographer/cartographer/mapping_3d
# Build directory: /home/youbot/catkin_ws/build_isolated/cartographer/install/cartographer/mapping_3d
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(mapping_3d_hybrid_grid_test "mapping_3d_hybrid_grid_test")
ADD_TEST(mapping_3d_kalman_local_trajectory_builder_test "mapping_3d_kalman_local_trajectory_builder_test")
ADD_TEST(mapping_3d_range_data_inserter_test "mapping_3d_range_data_inserter_test")
ADD_TEST(mapping_3d_motion_filter_test "mapping_3d_motion_filter_test")
SUBDIRS(scan_matching)
SUBDIRS(sparse_pose_graph)
