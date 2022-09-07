;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::get_float)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'get_float (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::GET_FLOAT")
  (make-package "TCC_MSG::GET_FLOAT"))
(unless (find-package "TCC_MSG::GET_FLOATREQUEST")
  (make-package "TCC_MSG::GET_FLOATREQUEST"))
(unless (find-package "TCC_MSG::GET_FLOATRESPONSE")
  (make-package "TCC_MSG::GET_FLOATRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::get_floatRequest
  :super ros::object
  :slots (_ask ))

(defmethod tcc_msg::get_floatRequest
  (:init
   (&key
    ((:ask __ask) nil)
    )
   (send-super :init)
   (setq _ask __ask)
   self)
  (:ask
   (&optional (__ask :null))
   (if (not (eq __ask :null)) (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; bool _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ask
       (if _ask (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ask
     (setq _ask (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass tcc_msg::get_floatResponse
  :super ros::object
  :slots (_value ))

(defmethod tcc_msg::get_floatResponse
  (:init
   (&key
    ((:value __value) 0.0)
    )
   (send-super :init)
   (setq _value (float __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; float64 _value
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _value
       (sys::poke _value (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _value
     (setq _value (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass tcc_msg::get_float
  :super ros::object
  :slots ())

(setf (get tcc_msg::get_float :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get tcc_msg::get_float :datatype-) "tcc_msg/get_float")
(setf (get tcc_msg::get_float :request) tcc_msg::get_floatRequest)
(setf (get tcc_msg::get_float :response) tcc_msg::get_floatResponse)

(defmethod tcc_msg::get_floatRequest
  (:response () (instance tcc_msg::get_floatResponse :init)))

(setf (get tcc_msg::get_floatRequest :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get tcc_msg::get_floatRequest :datatype-) "tcc_msg/get_floatRequest")
(setf (get tcc_msg::get_floatRequest :definition-)
      "bool ask
---
float64 value

")

(setf (get tcc_msg::get_floatResponse :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get tcc_msg::get_floatResponse :datatype-) "tcc_msg/get_floatResponse")
(setf (get tcc_msg::get_floatResponse :definition-)
      "bool ask
---
float64 value

")



(provide :tcc_msg/get_float "896e758cc9f93e6fc99057486a02ac6a")


