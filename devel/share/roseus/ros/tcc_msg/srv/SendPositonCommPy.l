;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::SendPositonCommPy)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'SendPositonCommPy (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::SENDPOSITONCOMMPY")
  (make-package "TCC_MSG::SENDPOSITONCOMMPY"))
(unless (find-package "TCC_MSG::SENDPOSITONCOMMPYREQUEST")
  (make-package "TCC_MSG::SENDPOSITONCOMMPYREQUEST"))
(unless (find-package "TCC_MSG::SENDPOSITONCOMMPYRESPONSE")
  (make-package "TCC_MSG::SENDPOSITONCOMMPYRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::SendPositonCommPyRequest
  :super ros::object
  :slots (_ask ))

(defmethod tcc_msg::SendPositonCommPyRequest
  (:init
   (&key
    ((:ask __ask) nil)
    )
   (send-super :init)
   (setq _ask __ask)
   self)
  (:ask
   (&optional (__ask :null))
   (if (not (eq __ask :null)) (setq _ask __ask)) _ask)
  (:serialization-length
   ()
   (+
    ;; bool _ask
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _ask
       (if _ask (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _ask
     (setq _ask (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass tcc_msg::SendPositonCommPyResponse
  :super ros::object
  :slots (_positions ))

(defmethod tcc_msg::SendPositonCommPyResponse
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

(defclass tcc_msg::SendPositonCommPy
  :super ros::object
  :slots ())

(setf (get tcc_msg::SendPositonCommPy :md5sum-) "acb524fbac00926fc8ce7e7c36ae4e03")
(setf (get tcc_msg::SendPositonCommPy :datatype-) "tcc_msg/SendPositonCommPy")
(setf (get tcc_msg::SendPositonCommPy :request) tcc_msg::SendPositonCommPyRequest)
(setf (get tcc_msg::SendPositonCommPy :response) tcc_msg::SendPositonCommPyResponse)

(defmethod tcc_msg::SendPositonCommPyRequest
  (:response () (instance tcc_msg::SendPositonCommPyResponse :init)))

(setf (get tcc_msg::SendPositonCommPyRequest :md5sum-) "acb524fbac00926fc8ce7e7c36ae4e03")
(setf (get tcc_msg::SendPositonCommPyRequest :datatype-) "tcc_msg/SendPositonCommPyRequest")
(setf (get tcc_msg::SendPositonCommPyRequest :definition-)
      "bool ask
---
float32[] positions
")

(setf (get tcc_msg::SendPositonCommPyResponse :md5sum-) "acb524fbac00926fc8ce7e7c36ae4e03")
(setf (get tcc_msg::SendPositonCommPyResponse :datatype-) "tcc_msg/SendPositonCommPyResponse")
(setf (get tcc_msg::SendPositonCommPyResponse :definition-)
      "bool ask
---
float32[] positions
")



(provide :tcc_msg/SendPositonCommPy "acb524fbac00926fc8ce7e7c36ae4e03")


