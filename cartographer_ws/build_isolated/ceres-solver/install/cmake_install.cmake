# Install script for directory: /home/youbot/catkin_ws/src/ceres-solver

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/youbot/catkin_ws/install_isolated")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ceres" TYPE FILE FILES
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/cost_function_to_functor.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/gradient_checker.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/crs_matrix.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/local_parameterization.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/cubic_interpolation.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/gradient_problem_solver.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/gradient_problem.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/sized_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/dynamic_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/ordered_groups.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/jet.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/iteration_callback.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/numeric_diff_options.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/c_api.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/autodiff_local_parameterization.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/types.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/solver.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/version.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/autodiff_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/normal_prior.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/covariance.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/dynamic_cost_function_to_functor.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/fpclassify.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/problem.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/rotation.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/conditioned_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/dynamic_autodiff_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/dynamic_numeric_diff_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/loss_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/numeric_diff_cost_function.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/ceres.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ceres/internal" TYPE FILE FILES
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/disable_warnings.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/scoped_ptr.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/macros.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/port.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/reenable_warnings.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/numeric_diff.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/autodiff.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/fixed_array.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/manual_constructor.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/variadic_evaluate.h"
    "/home/youbot/catkin_ws/src/ceres-solver/include/ceres/internal/eigen.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ceres/internal" TYPE FILE FILES "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/config/ceres/internal/config.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres/CeresTargets.cmake")
    FILE(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres/CeresTargets.cmake"
         "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/CMakeFiles/Export/lib/cmake/Ceres/CeresTargets.cmake")
    IF(EXPORT_FILE_CHANGED)
      FILE(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres/CeresTargets-*.cmake")
      IF(OLD_CONFIG_FILES)
        MESSAGE(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres/CeresTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        FILE(REMOVE ${OLD_CONFIG_FILES})
      ENDIF(OLD_CONFIG_FILES)
    ENDIF(EXPORT_FILE_CHANGED)
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres" TYPE FILE FILES "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/CMakeFiles/Export/lib/cmake/Ceres/CeresTargets.cmake")
  IF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres" TYPE FILE FILES "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/CMakeFiles/Export/lib/cmake/Ceres/CeresTargets-release.cmake")
  ENDIF("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres" TYPE FILE RENAME "CeresConfig.cmake" FILES "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/CeresConfig-install.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/Ceres" TYPE FILE FILES
    "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/CeresConfigVersion.cmake"
    "/home/youbot/catkin_ws/src/ceres-solver/cmake/FindEigen.cmake"
    "/home/youbot/catkin_ws/src/ceres-solver/cmake/FindGlog.cmake"
    "/home/youbot/catkin_ws/src/ceres-solver/cmake/FindGflags.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/youbot/catkin_ws/build_isolated/ceres-solver/install/internal/ceres/cmake_install.cmake")
  INCLUDE("/home/youbot/catkin_ws/build_isolated/ceres-solver/install/examples/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/youbot/catkin_ws/build_isolated/ceres-solver/install/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
