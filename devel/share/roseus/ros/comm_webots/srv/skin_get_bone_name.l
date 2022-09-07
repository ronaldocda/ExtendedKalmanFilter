;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::skin_get_bone_name)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'skin_get_bone_name (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_NAME")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_NAME"))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_NAMEREQUEST")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_NAMEREQUEST"))
(unless (find-package "COMM_WEBOTS::SKIN_GET_BONE_NAMERESPONSE")
  (make-package "COMM_WEBOTS::SKIN_GET_BONE_NAMERESPONSE"))

(in-package "ROS")





(defclass comm_webots::skin_get_bone_nameRequest
  :super ros::object
  :slots (_index ))

(defmethod comm_webots::skin_get_bone_nameRequest
  (:init
   (&key
    ((:index __index) 0)
    )
   (send-super :init)
   (setq _index (round __index))
   self)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:serialization-length
   ()
   (+
    ;; int32 _index
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _index
       (write-long _index s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass comm_webots::skin_get_bone_nameResponse
  :super ros::object
  :slots (_name ))

(defmethod comm_webots::skin_get_bone_nameResponse
  (:init
   (&key
    ((:name __name) "")
    )
   (send-super :init)
   (setq _name (string __name))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass comm_webots::skin_get_bone_name
  :super ros::object
  :slots ())

(setf (get comm_webots::skin_get_bone_name :md5sum-) "66ffbfea27ff9e5699fd78f900fd8579")
(setf (get comm_webots::skin_get_bone_name :datatype-) "comm_webots/skin_get_bone_name")
(setf (get comm_webots::skin_get_bone_name :request) comm_webots::skin_get_bone_nameRequest)
(setf (get comm_webots::skin_get_bone_name :response) comm_webots::skin_get_bone_nameResponse)

(defmethod comm_webots::skin_get_bone_nameRequest
  (:response () (instance comm_webots::skin_get_bone_nameResponse :init)))

(setf (get comm_webots::skin_get_bone_nameRequest :md5sum-) "66ffbfea27ff9e5699fd78f900fd8579")
(setf (get comm_webots::skin_get_bone_nameRequest :datatype-) "comm_webots/skin_get_bone_nameRequest")
(setf (get comm_webots::skin_get_bone_nameRequest :definition-)
      "int32 index
---
string name

")

(setf (get comm_webots::skin_get_bone_nameResponse :md5sum-) "66ffbfea27ff9e5699fd78f900fd8579")
(setf (get comm_webots::skin_get_bone_nameResponse :datatype-) "comm_webots/skin_get_bone_nameResponse")
(setf (get comm_webots::skin_get_bone_nameResponse :definition-)
      "int32 index
---
string name

")



(provide :comm_webots/skin_get_bone_name "66ffbfea27ff9e5699fd78f900fd8579")


