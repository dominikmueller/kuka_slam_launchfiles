# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "cartographer_ros_msgs: 3 messages, 2 services")

set(MSG_I_FLAGS "-Icartographer_ros_msgs:/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(cartographer_ros_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg" NAME_WE)
add_custom_target(_cartographer_ros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cartographer_ros_msgs" "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg" "geometry_msgs/Point:geometry_msgs/Quaternion:cartographer_ros_msgs/SubmapEntry:geometry_msgs/Pose"
)

get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv" NAME_WE)
add_custom_target(_cartographer_ros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cartographer_ros_msgs" "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv" ""
)

get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg" NAME_WE)
add_custom_target(_cartographer_ros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cartographer_ros_msgs" "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg" "geometry_msgs/Quaternion:geometry_msgs/Point:geometry_msgs/Pose"
)

get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv" NAME_WE)
add_custom_target(_cartographer_ros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cartographer_ros_msgs" "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv" "geometry_msgs/Quaternion:geometry_msgs/Point:geometry_msgs/Pose"
)

get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg" NAME_WE)
add_custom_target(_cartographer_ros_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cartographer_ros_msgs" "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg" "geometry_msgs/Point:geometry_msgs/Quaternion:cartographer_ros_msgs/TrajectorySubmapList:std_msgs/Header:cartographer_ros_msgs/SubmapEntry:geometry_msgs/Pose"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_cpp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_cpp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Services
_generate_srv_cpp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_srv_cpp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Module File
_generate_module_cpp(cartographer_ros_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(cartographer_ros_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(cartographer_ros_msgs_generate_messages cartographer_ros_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_cpp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_cpp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_cpp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_cpp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_cpp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cartographer_ros_msgs_gencpp)
add_dependencies(cartographer_ros_msgs_gencpp cartographer_ros_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cartographer_ros_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_lisp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_lisp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Services
_generate_srv_lisp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_srv_lisp(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Module File
_generate_module_lisp(cartographer_ros_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(cartographer_ros_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(cartographer_ros_msgs_generate_messages cartographer_ros_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_lisp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_lisp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_lisp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_lisp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_lisp _cartographer_ros_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cartographer_ros_msgs_genlisp)
add_dependencies(cartographer_ros_msgs_genlisp cartographer_ros_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cartographer_ros_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_py(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_msg_py(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Services
_generate_srv_py(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/indigo/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
)
_generate_srv_py(cartographer_ros_msgs
  "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
)

### Generating Module File
_generate_module_py(cartographer_ros_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(cartographer_ros_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(cartographer_ros_msgs_generate_messages cartographer_ros_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/TrajectorySubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_py _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/FinishTrajectory.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_py _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapEntry.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_py _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/srv/SubmapQuery.srv" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_py _cartographer_ros_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/youbot/catkin_ws/src/cartographer_ros/cartographer_ros_msgs/msg/SubmapList.msg" NAME_WE)
add_dependencies(cartographer_ros_msgs_generate_messages_py _cartographer_ros_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cartographer_ros_msgs_genpy)
add_dependencies(cartographer_ros_msgs_genpy cartographer_ros_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cartographer_ros_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cartographer_ros_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(cartographer_ros_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cartographer_ros_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(cartographer_ros_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cartographer_ros_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(cartographer_ros_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
