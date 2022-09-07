;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::get_bool)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'get_bool (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::GET_BOOL")
  (make-package "COMM_WEBOTS::GET_BOOL"))
(unless (find-package "COMM_WEBOTS::GET_BOOLREQUEST")
  (make-package "COMM_WEBOTS::GET_BOOLREQUEST"))
(unless (find-package "COMM_WEBOTS::GET_BOOLRESPONSE")
  (make-package "COMM_WEBOTS::GET_BOOLRESPONSE"))

(in-package "ROS")





(defclass comm_webots::get_boolRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::get_boolRequest
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

(defclass comm_webots::get_boolResponse
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::get_boolResponse
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

(defclass comm_webots::get_bool
  :super ros::object
  :slots ())

(setf (get comm_webots::get_bool :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get comm_webots::get_bool :datatype-) "comm_webots/get_bool")
(setf (get comm_webots::get_bool :request) comm_webots::get_boolRequest)
(setf (get comm_webots::get_bool :response) comm_webots::get_boolResponse)

(defmethod comm_webots::get_boolRequest
  (:response () (instance comm_webots::get_boolResponse :init)))

(setf (get comm_webots::get_boolRequest :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get comm_webots::get_boolRequest :datatype-) "comm_webots/get_boolRequest")
(setf (get comm_webots::get_boolRequest :definition-)
      "bool ask
---
bool value

")

(setf (get comm_webots::get_boolResponse :md5sum-) "155bbaa7eff4769d41b3327e2ec91080")
(setf (get comm_webots::get_boolResponse :datatype-) "comm_webots/get_boolResponse")
(setf (get comm_webots::get_boolResponse :definition-)
      "bool ask
---
bool value

")



(provide :comm_webots/get_bool "155bbaa7eff4769d41b3327e2ec91080")


