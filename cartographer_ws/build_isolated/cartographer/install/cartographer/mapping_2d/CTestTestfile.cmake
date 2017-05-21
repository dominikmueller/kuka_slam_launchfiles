# CMake generated Testfile for 
# Source directory: /home/youbot/catkin_ws/src/cartographer/cartographer/mapping_2d
# Build directory: /home/youbot/catkin_ws/build_isolated/cartographer/install/cartographer/mapping_2d
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(mapping_2d_range_data_inserter_test "mapping_2d_range_data_inserter_test")
ADD_TEST(mapping_2d_map_limits_test "mapping_2d_map_limits_test")
ADD_TEST(mapping_2d_probability_grid_test "mapping_2d_probability_grid_test")
ADD_TEST(mapping_2d_sparse_pose_graph_test "mapping_2d_sparse_pose_graph_test")
ADD_TEST(mapping_2d_submaps_test "mapping_2d_submaps_test")
ADD_TEST(mapping_2d_xy_index_test "mapping_2d_xy_index_test")
SUBDIRS(scan_matching)
