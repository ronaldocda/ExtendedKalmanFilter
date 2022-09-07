;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::SendPositonCommPy)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'SendPositonCommPy (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::SENDPOSITONCOMMPY")
  (make-package "TCC_MSG::SENDPOSITONCOMMPY"))

(in-package "ROS")
;;//! \htmlinclude SendPositonCommPy.msg.html


(defclass tcc_msg::SendPositonCommPy
  :super ros::object
  :slots (_positions ))

(defmethod tcc_msg::SendPositonCommPy
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
    ;; float32[] _positions
    (* 4    (length _positions)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _positions
     (write-long (length _positions) s)
     (dotimes (i (length _positions))
       (sys::poke (elt _positions i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _positions
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _positions (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _positions i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get tcc_msg::SendPositonCommPy :md5sum-) "500517ac65e26e2ba75ed60def015c0a")
(setf (get tcc_msg::SendPositonCommPy :datatype-) "tcc_msg/SendPositonCommPy")
(setf (get tcc_msg::SendPositonCommPy :definition-)
      "float32[] positions
")



(provide :tcc_msg/SendPositonCommPy "500517ac65e26e2ba75ed60def015c0a")


