;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::get_float)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'get_float (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::GET_FLOAT")
  (make-package "COMM_WEBOTS::GET_FLOAT"))
(unless (find-package "COMM_WEBOTS::GET_FLOATREQUEST")
  (make-package "COMM_WEBOTS::GET_FLOATREQUEST"))
(unless (find-package "COMM_WEBOTS::GET_FLOATRESPONSE")
  (make-package "COMM_WEBOTS::GET_FLOATRESPONSE"))

(in-package "ROS")





(defclass comm_webots::get_floatRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::get_floatRequest
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

(defclass comm_webots::get_floatResponse
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::get_floatResponse
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

(defclass comm_webots::get_float
  :super ros::object
  :slots ())

(setf (get comm_webots::get_float :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get comm_webots::get_float :datatype-) "comm_webots/get_float")
(setf (get comm_webots::get_float :request) comm_webots::get_floatRequest)
(setf (get comm_webots::get_float :response) comm_webots::get_floatResponse)

(defmethod comm_webots::get_floatRequest
  (:response () (instance comm_webots::get_floatResponse :init)))

(setf (get comm_webots::get_floatRequest :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get comm_webots::get_floatRequest :datatype-) "comm_webots/get_floatRequest")
(setf (get comm_webots::get_floatRequest :definition-)
      "bool ask
---
float64 value

")

(setf (get comm_webots::get_floatResponse :md5sum-) "896e758cc9f93e6fc99057486a02ac6a")
(setf (get comm_webots::get_floatResponse :datatype-) "comm_webots/get_floatResponse")
(setf (get comm_webots::get_floatResponse :definition-)
      "bool ask
---
float64 value

")



(provide :comm_webots/get_float "896e758cc9f93e6fc99057486a02ac6a")


