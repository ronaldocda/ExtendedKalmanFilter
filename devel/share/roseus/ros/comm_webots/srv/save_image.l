;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::save_image)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'save_image (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::SAVE_IMAGE")
  (make-package "COMM_WEBOTS::SAVE_IMAGE"))
(unless (find-package "COMM_WEBOTS::SAVE_IMAGEREQUEST")
  (make-package "COMM_WEBOTS::SAVE_IMAGEREQUEST"))
(unless (find-package "COMM_WEBOTS::SAVE_IMAGERESPONSE")
  (make-package "COMM_WEBOTS::SAVE_IMAGERESPONSE"))

(in-package "ROS")





(defclass comm_webots::save_imageRequest
  :super ros::object
  :slots (_filename _quality ))

(defmethod comm_webots::save_imageRequest
  (:init
   (&key
    ((:filename __filename) "")
    ((:quality __quality) 0)
    )
   (send-super :init)
   (setq _filename (string __filename))
   (setq _quality (round __quality))
   self)
  (:filename
   (&optional __filename)
   (if __filename (setq _filename __filename)) _filename)
  (:quality
   (&optional __quality)
   (if __quality (setq _quality __quality)) _quality)
  (:serialization-length
   ()
   (+
    ;; string _filename
    4 (length _filename)
    ;; int32 _quality
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _filename
       (write-long (length _filename) s) (princ _filename s)
     ;; int32 _quality
       (write-long _quality s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _filename
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _filename (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _quality
     (setq _quality (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass comm_webots::save_imageResponse
  :super ros::object
  :slots (_success ))

(defmethod comm_webots::save_imageResponse
  (:init
   (&key
    ((:success __success) 0)
    )
   (send-super :init)
   (setq _success (round __success))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:serialization-length
   ()
   (+
    ;; int8 _success
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int8 _success
       (write-byte _success s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int8 _success
     (setq _success (sys::peek buf ptr- :char)) (incf ptr- 1)
     (if (> _success 127) (setq _success (- _success 256)))
   ;;
   self)
  )

(defclass comm_webots::save_image
  :super ros::object
  :slots ())

(setf (get comm_webots::save_image :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get comm_webots::save_image :datatype-) "comm_webots/save_image")
(setf (get comm_webots::save_image :request) comm_webots::save_imageRequest)
(setf (get comm_webots::save_image :response) comm_webots::save_imageResponse)

(defmethod comm_webots::save_imageRequest
  (:response () (instance comm_webots::save_imageResponse :init)))

(setf (get comm_webots::save_imageRequest :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get comm_webots::save_imageRequest :datatype-) "comm_webots/save_imageRequest")
(setf (get comm_webots::save_imageRequest :definition-)
      "string filename
int32 quality
---
int8 success

")

(setf (get comm_webots::save_imageResponse :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get comm_webots::save_imageResponse :datatype-) "comm_webots/save_imageResponse")
(setf (get comm_webots::save_imageResponse :definition-)
      "string filename
int32 quality
---
int8 success

")



(provide :comm_webots/save_image "9f4c973c7b1d0924ab26586269d7499e")


