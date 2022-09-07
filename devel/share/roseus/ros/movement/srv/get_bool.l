;; Auto-generated. Do not edit!


(when (boundp 'movement::get_bool)
  (if (not (find-package "MOVEMENT"))
    (make-package "MOVEMENT"))
  (shadow 'get_bool (find-package "MOVEMENT")))
(unless (find-package "MOVEMENT::GET_BOOL")
  (make-package "MOVEMENT::GET_BOOL"))
(unless (find-package "MOVEMENT::GET_BOOLREQUEST")
  (make-package "MOVEMENT::GET_BOOLREQUEST"))
(unless (find-package "MOVEMENT::GET_BOOLRESPONSE")
  (make-package "MOVEMENT::GET_BOOLRESPONSE"))

(in-package "ROS")





(defclass movement::get_boolRequest
  :super ros::object
  :slots (_ask ))

(defmethod movement::get_boolRequest
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

(defclass movement::get_boolResponse
  :super ros::object
  :slots (_value ))

(defmethod movement::get_boolResponse
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

(defclass movement::get_bool
  :super ros::object
  :slots ())

(setf (get movement::get_bool :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get movement::get_bool :datatype-) "movement/get_bool")
(setf (get movement::get_bool :request) movement::get_boolRequest)
(setf (get movement::get_bool :response) movement::get_boolResponse)

(defmethod movement::get_boolRequest
  (:response () (instance movement::get_boolResponse :init)))

(setf (get movement::get_boolRequest :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get movement::get_boolRequest :datatype-) "movement/get_boolRequest")
(setf (get movement::get_boolRequest :definition-)
      "bool ask
---
bool value

")

(setf (get movement::get_boolResponse :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get movement::get_boolResponse :datatype-) "movement/get_boolResponse")
(setf (get movement::get_boolResponse :definition-)
      "bool ask
---
bool value

")



(provide :movement/get_bool "155bbaa7eff4769d41b3327e2ec91080")


