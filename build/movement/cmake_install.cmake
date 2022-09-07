# Install script for directory: /home/ronaldo/Tcc/src/movement

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ronaldo/Tcc/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement/msg" TYPE FILE FILES
    "/home/ronaldo/Tcc/src/movement/msg/BoolStamped.msg"
    "/home/ronaldo/Tcc/src/movement/msg/Float64Stamped.msg"
    "/home/ronaldo/Tcc/src/movement/msg/Int32Stamped.msg"
    "/home/ronaldo/Tcc/src/movement/msg/Int8Stamped.msg"
    "/home/ronaldo/Tcc/src/movement/msg/RadarTarget.msg"
    "/home/ronaldo/Tcc/src/movement/msg/RecognitionObject.msg"
    "/home/ronaldo/Tcc/src/movement/msg/RecognitionObjects.msg"
    "/home/ronaldo/Tcc/src/movement/msg/StringStamped.msg"
    "/home/ronaldo/Tcc/src/movement/msg/ContactPoint.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement/srv" TYPE FILE FILES
    "/home/ronaldo/Tcc/src/movement/srv/camera_get_focus_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/camera_get_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/camera_get_zoom_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_line.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_oval.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_pixel.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_polygon.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_rectangle.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_draw_text.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_get_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_copy.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_delete.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_load.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_new.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_paste.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_image_save.srv"
    "/home/ronaldo/Tcc/src/movement/srv/display_set_font.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_disable_sf_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_enable_sf_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_bool.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_color.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_count.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_float.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_int32.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_node.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_rotation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_type.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_name.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_vec2f.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_get_vec3f.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_import_node.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_import_node_from_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_remove_node.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_remove.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_bool.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_color.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_float.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_int32.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_rotation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_vec2f.srv"
    "/home/ronaldo/Tcc/src/movement/srv/field_set_vec3f.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_bool.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_float_array.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_float.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_int.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_uint64.srv"
    "/home/ronaldo/Tcc/src/movement/srv/get_urdf.srv"
    "/home/ronaldo/Tcc/src/movement/srv/gps_decimal_degrees_to_degrees_minutes_seconds.srv"
    "/home/ronaldo/Tcc/src/movement/srv/lidar_get_frequency_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/lidar_get_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/lidar_get_layer_point_cloud.srv"
    "/home/ronaldo/Tcc/src/movement/srv/lidar_get_layer_range_image.srv"
    "/home/ronaldo/Tcc/src/movement/srv/motor_set_control_pid.srv"
    "/home/ronaldo/Tcc/src/movement/srv/mouse_get_state.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_add_force_or_torque.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_add_force_with_offset.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_disable_contact_points_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_disable_pose_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_enable_contact_points_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_enable_pose_tracking.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_center_of_mass.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_contact_points.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_field.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_field_by_index.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_id.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_number_of_fields.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_name.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_orientation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_pose.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_parent_node.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_position.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_static_balance.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_status.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_set_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_type.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_get_velocity.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_remove.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_reset_functions.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_move_viewpoint.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_set_joint_position.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_set_visibility.srv"
    "/home/ronaldo/Tcc/src/movement/srv/node_set_velocity.srv"
    "/home/ronaldo/Tcc/src/movement/srv/pen_set_ink_color.srv"
    "/home/ronaldo/Tcc/src/movement/srv/range_finder_get_info.srv"
    "/home/ronaldo/Tcc/src/movement/srv/receiver_get_emitter_direction.srv"
    "/home/ronaldo/Tcc/src/movement/srv/robot_get_device_list.srv"
    "/home/ronaldo/Tcc/src/movement/srv/robot_set_mode.srv"
    "/home/ronaldo/Tcc/src/movement/srv/robot_wait_for_user_input_event.srv"
    "/home/ronaldo/Tcc/src/movement/srv/save_image.srv"
    "/home/ronaldo/Tcc/src/movement/srv/set_bool.srv"
    "/home/ronaldo/Tcc/src/movement/srv/set_float.srv"
    "/home/ronaldo/Tcc/src/movement/srv/set_float_array.srv"
    "/home/ronaldo/Tcc/src/movement/srv/set_int.srv"
    "/home/ronaldo/Tcc/src/movement/srv/set_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/skin_get_bone_name.srv"
    "/home/ronaldo/Tcc/src/movement/srv/skin_get_bone_orientation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/skin_get_bone_position.srv"
    "/home/ronaldo/Tcc/src/movement/srv/skin_set_bone_orientation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/skin_set_bone_position.srv"
    "/home/ronaldo/Tcc/src/movement/srv/speaker_is_sound_playing.srv"
    "/home/ronaldo/Tcc/src/movement/srv/speaker_speak.srv"
    "/home/ronaldo/Tcc/src/movement/srv/speaker_play_sound.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_get_from_def.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_get_from_id.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_get_from_string.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_movie_start_recording.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_set_label.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_virtual_reality_headset_get_orientation.srv"
    "/home/ronaldo/Tcc/src/movement/srv/supervisor_virtual_reality_headset_get_position.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement/cmake" TYPE FILE FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/movement-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/devel/include/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/devel/share/roseus/ros/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/devel/share/common-lisp/ros/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/devel/share/gennodejs/ros/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/ronaldo/Tcc/devel/lib/python3/dist-packages/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/devel/lib/python3/dist-packages/movement")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/movement.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement/cmake" TYPE FILE FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/movement-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement/cmake" TYPE FILE FILES
    "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/movementConfig.cmake"
    "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/movementConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE FILE FILES "/home/ronaldo/Tcc/src/movement/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/movement" TYPE EXECUTABLE FILES "/home/ronaldo/Tcc/devel/lib/movement/commWB")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB"
         OLD_RPATH "/opt/ros/noetic/lib:/opt/ros/noetic/lib/x86_64-linux-gnu:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/movement/commWB")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/movement" TYPE PROGRAM FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/ros_controller.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/movement" TYPE PROGRAM FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/ros_python.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/movement" TYPE PROGRAM FILES "/home/ronaldo/Tcc/build/movement/catkin_generated/installspace/webots_launcher.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/src/movement/launch")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/src/movement/plugins")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/src/movement/worlds")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/src/movement/config")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/movement" TYPE DIRECTORY FILES "/home/ronaldo/Tcc/src/movement/controllers")
endif()

