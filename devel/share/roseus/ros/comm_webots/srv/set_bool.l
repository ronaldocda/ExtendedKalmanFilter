;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::set_bool)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'set_bool (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SET_BOOL")
  (make-package "COMM_WEBOTS::SET_BOOL"))
(unless (find-package "COMM_WEBOTS::SET_BOOLREQUEST")
  (make-package "COMM_WEBOTS::SET_BOOLREQUEST"))
(unless (find-package "COMM_WEBOTS::SET_BOOLRESPONSE")
  (make-package "COMM_WEBOTS::SET_BOOLRESPONSE"))

(in-package "ROS")





(defclass comm_webots::set_boolRequest
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::set_boolRequest
  (:init
   (&key
    ((:value __value) nil)
    )
   (send-super :init)
   (setq _value __value)
   self)
  (:value
   (&optional (__value :null))
   (if (not (eq __value :null)) (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; bool _value
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _value
       (if _value (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _value
     (setq _value (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass comm_webots::set_boolResponse
  :super ros::object
  :slots (_success ))

(defmethod comm_webots::set_boolResponse
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

(defclass comm_webots::set_bool
  :super ros::object
  :slots ())

(setf (get comm_webots::set_bool :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get comm_webots::set_bool :datatype-) "comm_webots/set_bool")
(setf (get comm_webots::set_bool :request) comm_webots::set_boolRequest)
(setf (get comm_webots::set_bool :response) comm_webots::set_boolResponse)

(defmethod comm_webots::set_boolRequest
  (:response () (instance comm_webots::set_boolResponse :init)))

(setf (get comm_webots::set_boolRequest :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get comm_webots::set_boolRequest :datatype-) "comm_webots/set_boolRequest")
(setf (get comm_webots::set_boolRequest :definition-)
      "bool value
---
bool success

")

(setf (get comm_webots::set_boolResponse :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get comm_webots::set_boolResponse :datatype-) "comm_webots/set_boolResponse")
(setf (get comm_webots::set_boolResponse :definition-)
      "bool value
---
bool success

")



(provide :comm_webots/set_bool "24a0f9fd764459b7e35d04a0dd83dd11")


