;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::camera_get_focus_info)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'camera_get_focus_info (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFO")
  (make-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFO"))
(unless (find-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFOREQUEST")
  (make-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFOREQUEST"))
(unless (find-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFORESPONSE")
  (make-package "COMM_WEBOTS::CAMERA_GET_FOCUS_INFORESPONSE"))

(in-package "ROS")





(defclass comm_webots::camera_get_focus_infoRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::camera_get_focus_infoRequest
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

(defclass comm_webots::camera_get_focus_infoResponse
  :super ros::object
  :slots (_focalLength _focalDistance _maxFocalDistance _minFocalDistance ))

(defmethod comm_webots::camera_get_focus_infoResponse
  (:init
   (&key
    ((:focalLength __focalLength) 0.0)
    ((:focalDistance __focalDistance) 0.0)
    ((:maxFocalDistance __maxFocalDistance) 0.0)
    ((:minFocalDistance __minFocalDistance) 0.0)
    )
   (send-super :init)
   (setq _focalLength (float __focalLength))
   (setq _focalDistance (float __focalDistance))
   (setq _maxFocalDistance (float __maxFocalDistance))
   (setq _minFocalDistance (float __minFocalDistance))
   self)
  (:focalLength
   (&optional __focalLength)
   (if __focalLength (setq _focalLength __focalLength)) _focalLength)
  (:focalDistance
   (&optional __focalDistance)
   (if __focalDistance (setq _focalDistance __focalDistance)) _focalDistance)
  (:maxFocalDistance
   (&optional __maxFocalDistance)
   (if __maxFocalDistance (setq _maxFocalDistance __maxFocalDistance)) _maxFocalDistance)
  (:minFocalDistance
   (&optional __minFocalDistance)
   (if __minFocalDistance (setq _minFocalDistance __minFocalDistance)) _minFocalDistance)
  (:serialization-length
   ()
   (+
    ;; float64 _focalLength
    8
    ;; float64 _focalDistance
    8
    ;; float64 _maxFocalDistance
    8
    ;; float64 _minFocalDistance
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _focalLength
       (sys::poke _focalLength (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _focalDistance
       (sys::poke _focalDistance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _maxFocalDistance
       (sys::poke _maxFocalDistance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _minFocalDistance
       (sys::poke _minFocalDistance (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _focalLength
     (setq _focalLength (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _focalDistance
     (setq _focalDistance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _maxFocalDistance
     (setq _maxFocalDistance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _minFocalDistance
     (setq _minFocalDistance (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass comm_webots::camera_get_focus_info
  :super ros::object
  :slots ())

(setf (get comm_webots::camera_get_focus_info :md5sum-) "b515f92c1f91e19619caa437c4da4d85")
(setf (get comm_webots::camera_get_focus_info :datatype-) "comm_webots/camera_get_focus_info")
(setf (get comm_webots::camera_get_focus_info :request) comm_webots::camera_get_focus_infoRequest)
(setf (get comm_webots::camera_get_focus_info :response) comm_webots::camera_get_focus_infoResponse)

(defmethod comm_webots::camera_get_focus_infoRequest
  (:response () (instance comm_webots::camera_get_focus_infoResponse :init)))

(setf (get comm_webots::camera_get_focus_infoRequest :md5sum-) "b515f92c1f91e19619caa437c4da4d85")
(setf (get comm_webots::camera_get_focus_infoRequest :datatype-) "comm_webots/camera_get_focus_infoRequest")
(setf (get comm_webots::camera_get_focus_infoRequest :definition-)
      "uint8 ask
---
float64 focalLength
float64 focalDistance
float64 maxFocalDistance
float64 minFocalDistance

")

(setf (get comm_webots::camera_get_focus_infoResponse :md5sum-) "b515f92c1f91e19619caa437c4da4d85")
(setf (get comm_webots::camera_get_focus_infoResponse :datatype-) "comm_webots/camera_get_focus_infoResponse")
(setf (get comm_webots::camera_get_focus_infoResponse :definition-)
      "uint8 ask
---
float64 focalLength
float64 focalDistance
float64 maxFocalDistance
float64 minFocalDistance

")



(provide :comm_webots/camera_get_focus_info "b515f92c1f91e19619caa437c4da4d85")


