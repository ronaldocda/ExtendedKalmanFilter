;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::node_get_status)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'node_get_status (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::NODE_GET_STATUS")
  (make-package "COMM_WEBOTS::NODE_GET_STATUS"))
(unless (find-package "COMM_WEBOTS::NODE_GET_STATUSREQUEST")
  (make-package "COMM_WEBOTS::NODE_GET_STATUSREQUEST"))
(unless (find-package "COMM_WEBOTS::NODE_GET_STATUSRESPONSE")
  (make-package "COMM_WEBOTS::NODE_GET_STATUSRESPONSE"))

(in-package "ROS")





(defclass comm_webots::node_get_statusRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::node_get_statusRequest
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

(defclass comm_webots::node_get_statusResponse
  :super ros::object
  :slots (_status ))

(defmethod comm_webots::node_get_statusResponse
  (:init
   (&key
    ((:status __status) 0)
    )
   (send-super :init)
   (setq _status (round __status))
   self)
  (:status
   (&optional __status)
   (if __status (setq _status __status)) _status)
  (:serialization-length
   ()
   (+
    ;; uint8 _status
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _status
       (write-byte _status s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _status
     (setq _status (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass comm_webots::node_get_status
  :super ros::object
  :slots ())

(setf (get comm_webots::node_get_status :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get comm_webots::node_get_status :datatype-) "comm_webots/node_get_status")
(setf (get comm_webots::node_get_status :request) comm_webots::node_get_statusRequest)
(setf (get comm_webots::node_get_status :response) comm_webots::node_get_statusResponse)

(defmethod comm_webots::node_get_statusRequest
  (:response () (instance comm_webots::node_get_statusResponse :init)))

(setf (get comm_webots::node_get_statusRequest :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get comm_webots::node_get_statusRequest :datatype-) "comm_webots/node_get_statusRequest")
(setf (get comm_webots::node_get_statusRequest :definition-)
      "uint8 ask
---
uint8 status

")

(setf (get comm_webots::node_get_statusResponse :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get comm_webots::node_get_statusResponse :datatype-) "comm_webots/node_get_statusResponse")
(setf (get comm_webots::node_get_statusResponse :definition-)
      "uint8 ask
---
uint8 status

")



(provide :comm_webots/node_get_status "9d10c008835cf4bd024a6af9eca46c13")


