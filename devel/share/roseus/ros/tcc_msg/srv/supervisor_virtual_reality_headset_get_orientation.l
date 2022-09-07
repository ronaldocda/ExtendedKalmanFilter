;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::supervisor_virtual_reality_headset_get_orientation)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'supervisor_virtual_reality_headset_get_orientation (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION")
  (make-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATION"))
(unless (find-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONREQUEST")
  (make-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONREQUEST"))
(unless (find-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONRESPONSE")
  (make-package "TCC_MSG::SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONRESPONSE"))

(in-package "ROS")



(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))


(defclass tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest
  :super ros::object
  :slots (_ask ))

(defmethod tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest
  (:init
   (&key
    ((:ask __ask) 0)
    )
   (send-super :init)
   (setq _ask (round __ask))
   self)
  (:ask
   (&optional __ask)
   (if __ask (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; uint8 _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _ask
       (write-byte _ask s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _ask
     (setq _ask (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse
  :super ros::object
  :slots (_orientation ))

(defmethod tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse
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

(defclass tcc_msg::supervisor_virtual_reality_headset_get_orientation
  :super ros::object
  :slots ())

(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientation :md5sum-) "1da5db090570556f67921a94715018da")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientation :datatype-) "tcc_msg/supervisor_virtual_reality_headset_get_orientation")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientation :request) tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest)
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientation :response) tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse)

(defmethod tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest
  (:response () (instance tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse :init)))

(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest :md5sum-) "1da5db090570556f67921a94715018da")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest :datatype-) "tcc_msg/supervisor_virtual_reality_headset_get_orientationRequest")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest :definition-)
      "uint8 ask
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

(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse :md5sum-) "1da5db090570556f67921a94715018da")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse :datatype-) "tcc_msg/supervisor_virtual_reality_headset_get_orientationResponse")
(setf (get tcc_msg::supervisor_virtual_reality_headset_get_orientationResponse :definition-)
      "uint8 ask
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



(provide :tcc_msg/supervisor_virtual_reality_headset_get_orientation "1da5db090570556f67921a94715018da")


