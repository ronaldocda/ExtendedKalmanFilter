;; Auto-generated. Do not edit!


(when (boundp 'movement::set_string)
  (if (not (find-package "MOVEMENT"))
    (make-package "MOVEMENT"))
  (shadow 'set_string (find-package "MOVEMENT")))
(unless (find-package "MOVEMENT::SET_STRING")
  (make-package "MOVEMENT::SET_STRING"))
(unless (find-package "MOVEMENT::SET_STRINGREQUEST")
  (make-package "MOVEMENT::SET_STRINGREQUEST"))
(unless (find-package "MOVEMENT::SET_STRINGRESPONSE")
  (make-package "MOVEMENT::SET_STRINGRESPONSE"))

(in-package "ROS")





(defclass movement::set_stringRequest
  :super ros::object
  :slots (_value ))

(defmethod movement::set_stringRequest
  (:init
   (&key
    ((:value __value) "")
    )
   (send-super :init)
   (setq _value (string __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; string _value
    4 (length _value)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _value
       (write-long (length _value) s) (princ _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _value
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _value (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass movement::set_stringResponse
  :super ros::object
  :slots (_success ))

(defmethod movement::set_stringResponse
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

(defclass movement::set_string
  :super ros::object
  :slots ())

(setf (get movement::set_string :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get movement::set_string :datatype-) "movement/set_string")
(setf (get movement::set_string :request) movement::set_stringRequest)
(setf (get movement::set_string :response) movement::set_stringResponse)

(defmethod movement::set_stringRequest
  (:response () (instance movement::set_stringResponse :init)))

(setf (get movement::set_stringRequest :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get movement::set_stringRequest :datatype-) "movement/set_stringRequest")
(setf (get movement::set_stringRequest :definition-)
      "string value
---
bool success

")

(setf (get movement::set_stringResponse :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get movement::set_stringResponse :datatype-) "movement/set_stringResponse")
(setf (get movement::set_stringResponse :definition-)
      "string value
---
bool success

")



(provide :movement/set_string "0462bc0e878964615c49ad8ef45df667")


