;; Auto-generated. Do not edit!


(when (boundp 'movement::node_get_status)
  (if (not (find-package "MOVEMENT"))
    (make-package "MOVEMENT"))
  (shadow 'node_get_status (find-package "MOVEMENT")))
(unless (find-package "MOVEMENT::NODE_GET_STATUS")
  (make-package "MOVEMENT::NODE_GET_STATUS"))
(unless (find-package "MOVEMENT::NODE_GET_STATUSREQUEST")
  (make-package "MOVEMENT::NODE_GET_STATUSREQUEST"))
(unless (find-package "MOVEMENT::NODE_GET_STATUSRESPONSE")
  (make-package "MOVEMENT::NODE_GET_STATUSRESPONSE"))

(in-package "ROS")





(defclass movement::node_get_statusRequest
  :super ros::object
  :slots (_ask ))

(defmethod movement::node_get_statusRequest
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

(defclass movement::node_get_statusResponse
  :super ros::object
  :slots (_status ))

(defmethod movement::node_get_statusResponse
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

(defclass movement::node_get_status
  :super ros::object
  :slots ())

(setf (get movement::node_get_status :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get movement::node_get_status :datatype-) "movement/node_get_status")
(setf (get movement::node_get_status :request) movement::node_get_statusRequest)
(setf (get movement::node_get_status :response) movement::node_get_statusResponse)

(defmethod movement::node_get_statusRequest
  (:response () (instance movement::node_get_statusResponse :init)))

(setf (get movement::node_get_statusRequest :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get movement::node_get_statusRequest :datatype-) "movement/node_get_statusRequest")
(setf (get movement::node_get_statusRequest :definition-)
      "uint8 ask
---
uint8 status

")

(setf (get movement::node_get_statusResponse :md5sum-) "9d10c008835cf4bd024a6af9eca46c13")
(setf (get movement::node_get_statusResponse :datatype-) "movement/node_get_statusResponse")
(setf (get movement::node_get_statusResponse :definition-)
      "uint8 ask
---
uint8 status

")



(provide :movement/node_get_status "9d10c008835cf4bd024a6af9eca46c13")


