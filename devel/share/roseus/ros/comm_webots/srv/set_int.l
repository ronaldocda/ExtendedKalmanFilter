;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::set_int)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'set_int (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SET_INT")
  (make-package "COMM_WEBOTS::SET_INT"))
(unless (find-package "COMM_WEBOTS::SET_INTREQUEST")
  (make-package "COMM_WEBOTS::SET_INTREQUEST"))
(unless (find-package "COMM_WEBOTS::SET_INTRESPONSE")
  (make-package "COMM_WEBOTS::SET_INTRESPONSE"))

(in-package "ROS")





(defclass comm_webots::set_intRequest
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::set_intRequest
  (:init
   (&key
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _value (round __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _value
       (write-long _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass comm_webots::set_intResponse
  :super ros::object
  :slots (_success ))

(defmethod comm_webots::set_intResponse
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

(defclass comm_webots::set_int
  :super ros::object
  :slots ())

(setf (get comm_webots::set_int :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get comm_webots::set_int :datatype-) "comm_webots/set_int")
(setf (get comm_webots::set_int :request) comm_webots::set_intRequest)
(setf (get comm_webots::set_int :response) comm_webots::set_intResponse)

(defmethod comm_webots::set_intRequest
  (:response () (instance comm_webots::set_intResponse :init)))

(setf (get comm_webots::set_intRequest :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get comm_webots::set_intRequest :datatype-) "comm_webots/set_intRequest")
(setf (get comm_webots::set_intRequest :definition-)
      "int32 value
---
bool success

")

(setf (get comm_webots::set_intResponse :md5sum-) "bc437afb45673379bdb9f299f9cbbc9e")
(setf (get comm_webots::set_intResponse :datatype-) "comm_webots/set_intResponse")
(setf (get comm_webots::set_intResponse :definition-)
      "int32 value
---
bool success

")



(provide :comm_webots/set_int "bc437afb45673379bdb9f299f9cbbc9e")


