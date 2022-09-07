;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::EkfController)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'EkfController (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::EKFCONTROLLER")
  (make-package "TCC_MSG::EKFCONTROLLER"))

(in-package "ROS")
;;//! \htmlinclude EkfController.msg.html


(defclass tcc_msg::EkfController
  :super ros::object
  :slots (_phi _teta _psy _p _q _r ))

(defmethod tcc_msg::EkfController
  (:init
   (&key
    ((:phi __phi) 0.0)
    ((:teta __teta) 0.0)
    ((:psy __psy) 0.0)
    ((:p __p) 0.0)
    ((:q __q) 0.0)
    ((:r __r) 0.0)
    )
   (send-super :init)
   (setq _phi (float __phi))
   (setq _teta (float __teta))
   (setq _psy (float __psy))
   (setq _p (float __p))
   (setq _q (float __q))
   (setq _r (float __r))
   self)
  (:phi
   (&optional __phi)
   (if __phi (setq _phi __phi)) _phi)
  (:teta
   (&optional __teta)
   (if __teta (setq _teta __teta)) _teta)
  (:psy
   (&optional __psy)
   (if __psy (setq _psy __psy)) _psy)
  (:p
   (&optional __p)
   (if __p (setq _p __p)) _p)
  (:q
   (&optional __q)
   (if __q (setq _q __q)) _q)
  (:r
   (&optional __r)
   (if __r (setq _r __r)) _r)
  (:serialization-length
   ()
   (+
    ;; float64 _phi
    8
    ;; float64 _teta
    8
    ;; float64 _psy
    8
    ;; float64 _p
    8
    ;; float64 _q
    8
    ;; float64 _r
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _phi
       (sys::poke _phi (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _teta
       (sys::poke _teta (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _psy
       (sys::poke _psy (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _p
       (sys::poke _p (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _q
       (sys::poke _q (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _r
       (sys::poke _r (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _phi
     (setq _phi (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _teta
     (setq _teta (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _psy
     (setq _psy (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _p
     (setq _p (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _q
     (setq _q (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _r
     (setq _r (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get tcc_msg::EkfController :md5sum-) "a3c6fe06aab872658fab94d8664675f5")
(setf (get tcc_msg::EkfController :datatype-) "tcc_msg/EkfController")
(setf (get tcc_msg::EkfController :definition-)
      "float64 phi
float64 teta
float64 psy
float64 p
float64 q
float64 r
")



(provide :tcc_msg/EkfController "a3c6fe06aab872658fab94d8664675f5")


