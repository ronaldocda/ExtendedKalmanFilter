;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::set_string)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'set_string (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SET_STRING")
  (make-package "COMM_WEBOTS::SET_STRING"))
(unless (find-package "COMM_WEBOTS::SET_STRINGREQUEST")
  (make-package "COMM_WEBOTS::SET_STRINGREQUEST"))
(unless (find-package "COMM_WEBOTS::SET_STRINGRESPONSE")
  (make-package "COMM_WEBOTS::SET_STRINGRESPONSE"))

(in-package "ROS")





(defclass comm_webots::set_stringRequest
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::set_stringRequest
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

(defclass comm_webots::set_stringResponse
  :super ros::object
  :slots (_success ))

(defmethod comm_webots::set_stringResponse
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

(defclass comm_webots::set_string
  :super ros::object
  :slots ())

(setf (get comm_webots::set_string :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get comm_webots::set_string :datatype-) "comm_webots/set_string")
(setf (get comm_webots::set_string :request) comm_webots::set_stringRequest)
(setf (get comm_webots::set_string :response) comm_webots::set_stringResponse)

(defmethod comm_webots::set_stringRequest
  (:response () (instance comm_webots::set_stringResponse :init)))

(setf (get comm_webots::set_stringRequest :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get comm_webots::set_stringRequest :datatype-) "comm_webots/set_stringRequest")
(setf (get comm_webots::set_stringRequest :definition-)
      "string value
---
bool success

")

(setf (get comm_webots::set_stringResponse :md5sum-) "0462bc0e878964615c49ad8ef45df667")
(setf (get comm_webots::set_stringResponse :datatype-) "comm_webots/set_stringResponse")
(setf (get comm_webots::set_stringResponse :definition-)
      "string value
---
bool success

")



(provide :comm_webots/set_string "0462bc0e878964615c49ad8ef45df667")


