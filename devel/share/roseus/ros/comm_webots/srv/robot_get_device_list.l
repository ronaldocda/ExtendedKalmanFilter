;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::robot_get_device_list)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'robot_get_device_list (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LIST")
  (make-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LIST"))
(unless (find-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LISTREQUEST")
  (make-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LISTREQUEST"))
(unless (find-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LISTRESPONSE")
  (make-package "COMM_WEBOTS::ROBOT_GET_DEVICE_LISTRESPONSE"))

(in-package "ROS")





(defclass comm_webots::robot_get_device_listRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::robot_get_device_listRequest
  (:init
   (&key
    ((:ask __ask) 0)
    )
   (send-super :init)
   (setq _ask (round __ask))
   self)
  (:ask
   (&optional __ask)
   (if __ask (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; uint8 _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _ask
       (write-byte _ask s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _ask
     (setq _ask (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(defclass comm_webots::robot_get_device_listResponse
  :super ros::object
  :slots (_list ))

(defmethod comm_webots::robot_get_device_listResponse
  (:init
   (&key
    ((:list __list) (let (r) (dotimes (i 0) (push "" r)) r))
    )
   (send-super :init)
   (setq _list __list)
   self)
  (:list
   (&optional __list)
   (if __list (setq _list __list)) _list)
  (:serialization-length
   ()
   (+
    ;; string[] _list
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _list)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string[] _list
     (write-long (length _list) s)
     (dolist (elem _list)
       (write-long (length elem) s) (princ elem s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string[] _list
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _list (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _list i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;;
   self)
  )

(defclass comm_webots::robot_get_device_list
  :super ros::object
  :slots ())

(setf (get comm_webots::robot_get_device_list :md5sum-) "463f6db5695c1f090f76a453a11e7381")
(setf (get comm_webots::robot_get_device_list :datatype-) "comm_webots/robot_get_device_list")
(setf (get comm_webots::robot_get_device_list :request) comm_webots::robot_get_device_listRequest)
(setf (get comm_webots::robot_get_device_list :response) comm_webots::robot_get_device_listResponse)

(defmethod comm_webots::robot_get_device_listRequest
  (:response () (instance comm_webots::robot_get_device_listResponse :init)))

(setf (get comm_webots::robot_get_device_listRequest :md5sum-) "463f6db5695c1f090f76a453a11e7381")
(setf (get comm_webots::robot_get_device_listRequest :datatype-) "comm_webots/robot_get_device_listRequest")
(setf (get comm_webots::robot_get_device_listRequest :definition-)
      "uint8 ask
---
string[] list

")

(setf (get comm_webots::robot_get_device_listResponse :md5sum-) "463f6db5695c1f090f76a453a11e7381")
(setf (get comm_webots::robot_get_device_listResponse :datatype-) "comm_webots/robot_get_device_listResponse")
(setf (get comm_webots::robot_get_device_listResponse :definition-)
      "uint8 ask
---
string[] list

")



(provide :comm_webots/robot_get_device_list "463f6db5695c1f090f76a453a11e7381")


