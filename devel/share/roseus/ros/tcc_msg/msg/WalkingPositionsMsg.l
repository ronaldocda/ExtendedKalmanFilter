;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::WalkingPositionsMsg)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'WalkingPositionsMsg (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::WALKINGPOSITIONSMSG")
  (make-package "TCC_MSG::WALKINGPOSITIONSMSG"))

(in-package "ROS")
;;//! \htmlinclude WalkingPositionsMsg.msg.html


(defclass tcc_msg::WalkingPositionsMsg
  :super ros::object
  :slots (_positions ))

(defmethod tcc_msg::WalkingPositionsMsg
  (:init
   (&key
    ((:positions __positions) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _positions __positions)
   self)
  (:positions
   (&optional __positions)
   (if __positions (setq _positions __positions)) _positions)
  (:serialization-length
   ()
   (+
    ;; float64[] _positions
    (* 8    (length _positions)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _positions
     (write-long (length _positions) s)
     (dotimes (i (length _positions))
       (sys::poke (elt _positions i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _positions
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _positions (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _positions i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(setf (get tcc_msg::WalkingPositionsMsg :md5sum-) "3b33cf2d1f9005e741ee291d519b97ee")
(setf (get tcc_msg::WalkingPositionsMsg :datatype-) "tcc_msg/WalkingPositionsMsg")
(setf (get tcc_msg::WalkingPositionsMsg :definition-)
      "float64[] positions
")



(provide :tcc_msg/WalkingPositionsMsg "3b33cf2d1f9005e741ee291d519b97ee")


