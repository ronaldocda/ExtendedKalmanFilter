;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::display_draw_pixel)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'display_draw_pixel (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::DISPLAY_DRAW_PIXEL")
  (make-package "TCC_MSG::DISPLAY_DRAW_PIXEL"))
(unless (find-package "TCC_MSG::DISPLAY_DRAW_PIXELREQUEST")
  (make-package "TCC_MSG::DISPLAY_DRAW_PIXELREQUEST"))
(unless (find-package "TCC_MSG::DISPLAY_DRAW_PIXELRESPONSE")
  (make-package "TCC_MSG::DISPLAY_DRAW_PIXELRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::display_draw_pixelRequest
  :super ros::object
  :slots (_x1 _y1 ))

(defmethod tcc_msg::display_draw_pixelRequest
  (:init
   (&key
    ((:x1 __x1) 0)
    ((:y1 __y1) 0)
    )
   (send-super :init)
   (setq _x1 (round __x1))
   (setq _y1 (round __y1))
   self)
  (:x1
   (&optional __x1)
   (if __x1 (setq _x1 __x1)) _x1)
  (:y1
   (&optional __y1)
   (if __y1 (setq _y1 __y1)) _y1)
  (:serialization-length
   ()
   (+
    ;; int32 _x1
    4
    ;; int32 _y1
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _x1
       (write-long _x1 s)
     ;; int32 _y1
       (write-long _y1 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _x1
     (setq _x1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _y1
     (setq _y1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass tcc_msg::display_draw_pixelResponse
  :super ros::object
  :slots (_success ))

(defmethod tcc_msg::display_draw_pixelResponse
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

(defclass tcc_msg::display_draw_pixel
  :super ros::object
  :slots ())

(setf (get tcc_msg::display_draw_pixel :md5sum-) "e8e87fb7b87ab83a24bea771b7fc11df")
(setf (get tcc_msg::display_draw_pixel :datatype-) "tcc_msg/display_draw_pixel")
(setf (get tcc_msg::display_draw_pixel :request) tcc_msg::display_draw_pixelRequest)
(setf (get tcc_msg::display_draw_pixel :response) tcc_msg::display_draw_pixelResponse)

(defmethod tcc_msg::display_draw_pixelRequest
  (:response () (instance tcc_msg::display_draw_pixelResponse :init)))

(setf (get tcc_msg::display_draw_pixelRequest :md5sum-) "e8e87fb7b87ab83a24bea771b7fc11df")
(setf (get tcc_msg::display_draw_pixelRequest :datatype-) "tcc_msg/display_draw_pixelRequest")
(setf (get tcc_msg::display_draw_pixelRequest :definition-)
      "int32 x1
int32 y1
---
int8 success

")

(setf (get tcc_msg::display_draw_pixelResponse :md5sum-) "e8e87fb7b87ab83a24bea771b7fc11df")
(setf (get tcc_msg::display_draw_pixelResponse :datatype-) "tcc_msg/display_draw_pixelResponse")
(setf (get tcc_msg::display_draw_pixelResponse :definition-)
      "int32 x1
int32 y1
---
int8 success

")



(provide :tcc_msg/display_draw_pixel "e8e87fb7b87ab83a24bea771b7fc11df")


