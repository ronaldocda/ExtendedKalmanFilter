;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::get_bool)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'get_bool (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::GET_BOOL")
  (make-package "TCC_MSG::GET_BOOL"))
(unless (find-package "TCC_MSG::GET_BOOLREQUEST")
  (make-package "TCC_MSG::GET_BOOLREQUEST"))
(unless (find-package "TCC_MSG::GET_BOOLRESPONSE")
  (make-package "TCC_MSG::GET_BOOLRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::get_boolRequest
  :super ros::object
  :slots (_ask ))

(defmethod tcc_msg::get_boolRequest
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

(defclass tcc_msg::get_boolResponse
  :super ros::object
  :slots (_value ))

(defmethod tcc_msg::get_boolResponse
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

(defclass tcc_msg::get_bool
  :super ros::object
  :slots ())

(setf (get tcc_msg::get_bool :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get tcc_msg::get_bool :datatype-) "tcc_msg/get_bool")
(setf (get tcc_msg::get_bool :request) tcc_msg::get_boolRequest)
(setf (get tcc_msg::get_bool :response) tcc_msg::get_boolResponse)

(defmethod tcc_msg::get_boolRequest
  (:response () (instance tcc_msg::get_boolResponse :init)))

(setf (get tcc_msg::get_boolRequest :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get tcc_msg::get_boolRequest :datatype-) "tcc_msg/get_boolRequest")
(setf (get tcc_msg::get_boolRequest :definition-)
      "bool ask
---
bool value

")

(setf (get tcc_msg::get_boolResponse :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get tcc_msg::get_boolResponse :datatype-) "tcc_msg/get_boolResponse")
(setf (get tcc_msg::get_boolResponse :definition-)
      "bool ask
---
bool value

")



(provide :tcc_msg/get_bool "155bbaa7eff4769d41b3327e2ec91080")


