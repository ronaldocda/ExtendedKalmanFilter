;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::set_float)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'set_float (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SET_FLOAT")
  (make-package "COMM_WEBOTS::SET_FLOAT"))
(unless (find-package "COMM_WEBOTS::SET_FLOATREQUEST")
  (make-package "COMM_WEBOTS::SET_FLOATREQUEST"))
(unless (find-package "COMM_WEBOTS::SET_FLOATRESPONSE")
  (make-package "COMM_WEBOTS::SET_FLOATRESPONSE"))

(in-package "ROS")





(defclass comm_webots::set_floatRequest
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::set_floatRequest
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

(defclass comm_webots::set_floatResponse
  :super ros::object
  :slots (_success ))

(defmethod comm_webots::set_floatResponse
  (:init
   (&key
    ((:success __success) nil)
    )
   (send-super :init)
   (setq _success __success)
   self)
  (:success
   (&optional (__success :null))
   (if (not (eq __success :null)) (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass comm_webots::set_float
  :super ros::object
  :slots ())

(setf (get comm_webots::set_float :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get comm_webots::set_float :datatype-) "comm_webots/set_float")
(setf (get comm_webots::set_float :request) comm_webots::set_floatRequest)
(setf (get comm_webots::set_float :response) comm_webots::set_floatResponse)

(defmethod comm_webots::set_floatRequest
  (:response () (instance comm_webots::set_floatResponse :init)))

(setf (get comm_webots::set_floatRequest :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get comm_webots::set_floatRequest :datatype-) "comm_webots/set_floatRequest")
(setf (get comm_webots::set_floatRequest :definition-)
      "float64 value
---
bool success

")

(setf (get comm_webots::set_floatResponse :md5sum-) "0f0509b4253b73657cb37e93f4f2960c")
(setf (get comm_webots::set_floatResponse :datatype-) "comm_webots/set_floatResponse")
(setf (get comm_webots::set_floatResponse :definition-)
      "float64 value
---
bool success

")



(provide :comm_webots/set_float "0f0509b4253b73657cb37e93f4f2960c")


