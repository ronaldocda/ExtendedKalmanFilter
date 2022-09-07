;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::get_urdf)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'get_urdf (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::GET_URDF")
  (make-package "COMM_WEBOTS::GET_URDF"))
(unless (find-package "COMM_WEBOTS::GET_URDFREQUEST")
  (make-package "COMM_WEBOTS::GET_URDFREQUEST"))
(unless (find-package "COMM_WEBOTS::GET_URDFRESPONSE")
  (make-package "COMM_WEBOTS::GET_URDFRESPONSE"))

(in-package "ROS")





(defclass comm_webots::get_urdfRequest
  :super ros::object
  :slots (_prefix ))

(defmethod comm_webots::get_urdfRequest
  (:init
   (&key
    ((:prefix __prefix) "")
    )
   (send-super :init)
   (setq _prefix (string __prefix))
   self)
  (:prefix
   (&optional __prefix)
   (if __prefix (setq _prefix __prefix)) _prefix)
  (:serialization-length
   ()
   (+
    ;; string _prefix
    4 (length _prefix)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _prefix
       (write-long (length _prefix) s) (princ _prefix s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _prefix
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _prefix (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass comm_webots::get_urdfResponse
  :super ros::object
  :slots (_value ))

(defmethod comm_webots::get_urdfResponse
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

(defclass comm_webots::get_urdf
  :super ros::object
  :slots ())

(setf (get comm_webots::get_urdf :md5sum-) "9ae31c29f15764629e70e60492948eb1")
(setf (get comm_webots::get_urdf :datatype-) "comm_webots/get_urdf")
(setf (get comm_webots::get_urdf :request) comm_webots::get_urdfRequest)
(setf (get comm_webots::get_urdf :response) comm_webots::get_urdfResponse)

(defmethod comm_webots::get_urdfRequest
  (:response () (instance comm_webots::get_urdfResponse :init)))

(setf (get comm_webots::get_urdfRequest :md5sum-) "9ae31c29f15764629e70e60492948eb1")
(setf (get comm_webots::get_urdfRequest :datatype-) "comm_webots/get_urdfRequest")
(setf (get comm_webots::get_urdfRequest :definition-)
      "string prefix
---
string value

")

(setf (get comm_webots::get_urdfResponse :md5sum-) "9ae31c29f15764629e70e60492948eb1")
(setf (get comm_webots::get_urdfResponse :datatype-) "comm_webots/get_urdfResponse")
(setf (get comm_webots::get_urdfResponse :definition-)
      "string prefix
---
string value

")



(provide :comm_webots/get_urdf "9ae31c29f15764629e70e60492948eb1")


