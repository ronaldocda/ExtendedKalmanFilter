;; Auto-generated. Do not edit!


(when (boundp 'movement::save_image)
  (if (not (find-package "MOVEMENT"))
    (make-package "MOVEMENT"))
  (shadow 'save_image (find-package "MOVEMENT")))
(unless (find-package "MOVEMENT::SAVE_IMAGE")
  (make-package "MOVEMENT::SAVE_IMAGE"))
(unless (find-package "MOVEMENT::SAVE_IMAGEREQUEST")
  (make-package "MOVEMENT::SAVE_IMAGEREQUEST"))
(unless (find-package "MOVEMENT::SAVE_IMAGERESPONSE")
  (make-package "MOVEMENT::SAVE_IMAGERESPONSE"))

(in-package "ROS")





(defclass movement::save_imageRequest
  :super ros::object
  :slots (_filename _quality ))

(defmethod movement::save_imageRequest
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

(defclass movement::save_imageResponse
  :super ros::object
  :slots (_success ))

(defmethod movement::save_imageResponse
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

(defclass movement::save_image
  :super ros::object
  :slots ())

(setf (get movement::save_image :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get movement::save_image :datatype-) "movement/save_image")
(setf (get movement::save_image :request) movement::save_imageRequest)
(setf (get movement::save_image :response) movement::save_imageResponse)

(defmethod movement::save_imageRequest
  (:response () (instance movement::save_imageResponse :init)))

(setf (get movement::save_imageRequest :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get movement::save_imageRequest :datatype-) "movement/save_imageRequest")
(setf (get movement::save_imageRequest :definition-)
      "string filename
int32 quality
---
int8 success

")

(setf (get movement::save_imageResponse :md5sum-) "9f4c973c7b1d0924ab26586269d7499e")
(setf (get movement::save_imageResponse :datatype-) "movement/save_imageResponse")
(setf (get movement::save_imageResponse :definition-)
      "string filename
int32 quality
---
int8 success

")



(provide :movement/save_image "9f4c973c7b1d0924ab26586269d7499e")


