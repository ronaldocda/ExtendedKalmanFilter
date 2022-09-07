;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::get_int)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'get_int (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::GET_INT")
  (make-package "COMM_WEBOTS::GET_INT"))
(unless (find-package "COMM_WEBOTS::GET_INTREQUEST")
  (make-package "COMM_WEBOTS::GET_INTREQUEST"))
(unless (find-package "COMM_WEBOTS::GET_INTRESPONSE")
  (make-package "COMM_WEBOTS::GET_INTRESPONSE"))

(in-package "ROS")





(defclass comm_webots::get_intRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::get_intRequest
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

(defclass comm_webots::get_intResponse
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::get_intResponse
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

(defclass comm_webots::get_int
  :super ros::object
  :slots ())

(setf (get comm_webots::get_int :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get comm_webots::get_int :datatype-) "comm_webots/get_int")
(setf (get comm_webots::get_int :request) comm_webots::get_intRequest)
(setf (get comm_webots::get_int :response) comm_webots::get_intResponse)

(defmethod comm_webots::get_intRequest
  (:response () (instance comm_webots::get_intResponse :init)))

(setf (get comm_webots::get_intRequest :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get comm_webots::get_intRequest :datatype-) "comm_webots/get_intRequest")
(setf (get comm_webots::get_intRequest :definition-)
      "bool ask
---
int32 value

")

(setf (get comm_webots::get_intResponse :md5sum-) "73dfae6ec9145dcc45d5ed973079e912")
(setf (get comm_webots::get_intResponse :datatype-) "comm_webots/get_intResponse")
(setf (get comm_webots::get_intResponse :definition-)
      "bool ask
---
int32 value

")



(provide :comm_webots/get_int "73dfae6ec9145dcc45d5ed973079e912")


