;; Auto-generated. Do not edit!


(when (boundp 'movement::set_bool)
  (if (not (find-package "MOVEMENT"))
    (make-package "MOVEMENT"))
  (shadow 'set_bool (find-package "MOVEMENT")))
(unless (find-package "MOVEMENT::SET_BOOL")
  (make-package "MOVEMENT::SET_BOOL"))
(unless (find-package "MOVEMENT::SET_BOOLREQUEST")
  (make-package "MOVEMENT::SET_BOOLREQUEST"))
(unless (find-package "MOVEMENT::SET_BOOLRESPONSE")
  (make-package "MOVEMENT::SET_BOOLRESPONSE"))

(in-package "ROS")





(defclass movement::set_boolRequest
  :super ros::object
  :slots (_value ))

(defmethod movement::set_boolRequest
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

(defclass movement::set_boolResponse
  :super ros::object
  :slots (_success ))

(defmethod movement::set_boolResponse
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

(defclass movement::set_bool
  :super ros::object
  :slots ())

(setf (get movement::set_bool :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get movement::set_bool :datatype-) "movement/set_bool")
(setf (get movement::set_bool :request) movement::set_boolRequest)
(setf (get movement::set_bool :response) movement::set_boolResponse)

(defmethod movement::set_boolRequest
  (:response () (instance movement::set_boolResponse :init)))

(setf (get movement::set_boolRequest :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get movement::set_boolRequest :datatype-) "movement/set_boolRequest")
(setf (get movement::set_boolRequest :definition-)
      "bool value
---
bool success

")

(setf (get movement::set_boolResponse :md5sum-) "24a0f9fd764459b7e35d04a0dd83dd11")
(setf (get movement::set_boolResponse :datatype-) "movement/set_boolResponse")
(setf (get movement::set_boolResponse :definition-)
      "bool value
---
bool success

")



(provide :movement/set_bool "24a0f9fd764459b7e35d04a0dd83dd11")


