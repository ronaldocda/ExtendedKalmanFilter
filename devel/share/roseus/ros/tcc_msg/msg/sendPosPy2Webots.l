;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::sendPosPy2Webots)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'sendPosPy2Webots (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::SENDPOSPY2WEBOTS")
  (make-package "TCC_MSG::SENDPOSPY2WEBOTS"))

(in-package "ROS")
;;//! \htmlinclude sendPosPy2Webots.msg.html


(defclass tcc_msg::sendPosPy2Webots
  :super ros::object
  :slots (_positions _velocity ))

(defmethod tcc_msg::sendPosPy2Webots
  (:init
   (&key
    ((:positions __positions) (make-array 12 :initial-element 0.0 :element-type :float))
    ((:velocity __velocity) (make-array 12 :initial-element 0 :element-type :integer))
    )
   (send-super :init)
   (setq _positions __positions)
   (setq _velocity __velocity)
   self)
  (:positions
   (&optional __positions)
   (if __positions (setq _positions __positions)) _positions)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:serialization-length
   ()
   (+
    ;; float64[12] _positions
    (* 8    12)
    ;; int16[12] _velocity
    (* 2    12)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[12] _positions
     (dotimes (i 12)
       (sys::poke (elt _positions i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;; int16[12] _velocity
     (dotimes (i 12)
       (write-word (elt _velocity i) s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[12] _positions
   (dotimes (i (length _positions))
     (setf (elt _positions i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     )
   ;; int16[12] _velocity
   (dotimes (i (length _velocity))
     (setf (elt _velocity i) (sys::peek buf ptr- :short)) (incf ptr- 2)
     )
   ;;
   self)
  )

(setf (get tcc_msg::sendPosPy2Webots :md5sum-) "502a1295b892f5068b280d9a9d0ad702")
(setf (get tcc_msg::sendPosPy2Webots :datatype-) "tcc_msg/sendPosPy2Webots")
(setf (get tcc_msg::sendPosPy2Webots :definition-)
      "float64[12] positions
int16[12] velocity

")



(provide :tcc_msg/sendPosPy2Webots "502a1295b892f5068b280d9a9d0ad702")


