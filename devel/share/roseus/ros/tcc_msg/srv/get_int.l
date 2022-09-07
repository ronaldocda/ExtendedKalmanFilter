;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::get_int)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'get_int (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::GET_INT")
  (make-package "TCC_MSG::GET_INT"))
(unless (find-package "TCC_MSG::GET_INTREQUEST")
  (make-package "TCC_MSG::GET_INTREQUEST"))
(unless (find-package "TCC_MSG::GET_INTRESPONSE")
  (make-package "TCC_MSG::GET_INTRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::get_intRequest
  :super ros::object
  :slots (_ask ))

(defmethod tcc_msg::get_intRequest
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

(defclass tcc_msg::get_intResponse
  :super ros::object
  :slots (_value ))

(defmethod tcc_msg::get_intResponse
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

(defclass tcc_msg::get_int
  :super ros::object
  :slots ())

(setf (get tcc_msg::get_int :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get tcc_msg::get_int :datatype-) "tcc_msg/get_int")
(setf (get tcc_msg::get_int :request) tcc_msg::get_intRequest)
(setf (get tcc_msg::get_int :response) tcc_msg::get_intResponse)

(defmethod tcc_msg::get_intRequest
  (:response () (instance tcc_msg::get_intResponse :init)))

(setf (get tcc_msg::get_intRequest :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get tcc_msg::get_intRequest :datatype-) "tcc_msg/get_intRequest")
(setf (get tcc_msg::get_intRequest :definition-)
      "bool ask
---
int32 value

")

(setf (get tcc_msg::get_intResponse :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get tcc_msg::get_intResponse :datatype-) "tcc_msg/get_intResponse")
(setf (get tcc_msg::get_intResponse :definition-)
      "bool ask
---
int32 value

")



(provide :tcc_msg/get_int "73dfae6ec9145dcc45d5ed973079e912")


