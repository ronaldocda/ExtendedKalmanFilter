;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::skin_get_bone_orientation)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'skin_get_bone_orientation (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATION")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATION"))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATIONREQUEST")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATIONREQUEST"))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATIONRESPONSE")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_ORIENTATIONRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass comm_webots::skin_get_bone_orientationRequest
  :super ros::object
  :slots (_index _absolute ))

(defmethod comm_webots::skin_get_bone_orientationRequest
  (:init
   (&key
    ((:index __index) 0)
    ((:absolute __absolute) nil)
    )
   (send-super :init)
   (setq _index (round __index))
   (setq _absolute __absolute)
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:absolute
   (&optional (__absolute :null))
   (if (not (eq __absolute :null)) (setq _absolute __absolute)) _absolute)
  (:serialization-length
   ()
   (+
    ;; int32 _index
    4
    ;; bool _absolute
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _index
       (write-long _index s)
     ;; bool _absolute
       (if _absolute (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _absolute
     (setq _absolute (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass comm_webots::skin_get_bone_orientationResponse
  :super ros::object
  :slots (_orientation ))

(defmethod comm_webots::skin_get_bone_orientationResponse
  (:init
   (&key
    ((:orientation __orientation) (instance geometry_msgs::Quaternion :init))
    )
   (send-super :init)
   (setq _orientation __orientation)
   self)
  (:orientation
   (&rest __orientation)
   (if (keywordp (car __orientation))
       (send* _orientation __orientation)
     (progn
       (if __orientation (setq _orientation (car __orientation)))
       _orientation)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Quaternion _orientation
    (send _orientation :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Quaternion _orientation
       (send _orientation :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Quaternion _orientation
     (send _orientation :deserialize buf ptr-) (incf ptr- (send _orientation :serialization-length))
   ;;
   self)
  )

(defclass comm_webots::skin_get_bone_orientation
  :super ros::object
  :slots ())

(setf (get comm_webots::skin_get_bone_orientation :md5sum-) "f5889bc85962c2ea0f40d74e77b00b8b")
(setf (get comm_webots::skin_get_bone_orientation :datatype-) "comm_webots/skin_get_bone_orientation")
(setf (get comm_webots::skin_get_bone_orientation :request) comm_webots::skin_get_bone_orientationRequest)
(setf (get comm_webots::skin_get_bone_orientation :response) comm_webots::skin_get_bone_orientationResponse)

(defmethod comm_webots::skin_get_bone_orientationRequest
  (:response () (instance comm_webots::skin_get_bone_orientationResponse :init)))

(setf (get comm_webots::skin_get_bone_orientationRequest :md5sum-) "f5889bc85962c2ea0f40d74e77b00b8b")
(setf (get comm_webots::skin_get_bone_orientationRequest :datatype-) "comm_webots/skin_get_bone_orientationRequest")
(setf (get comm_webots::skin_get_bone_orientationRequest :definition-)
      "int32 index
bool absolute
---
geometry_msgs/Quaternion orientation


================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")

(setf (get comm_webots::skin_get_bone_orientationResponse :md5sum-) "f5889bc85962c2ea0f40d74e77b00b8b")
(setf (get comm_webots::skin_get_bone_orientationResponse :datatype-) "comm_webots/skin_get_bone_orientationResponse")
(setf (get comm_webots::skin_get_bone_orientationResponse :definition-)
      "int32 index
bool absolute
---
geometry_msgs/Quaternion orientation


================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
")



(provide :comm_webots/skin_get_bone_orientation "f5889bc85962c2ea0f40d74e77b00b8b")


