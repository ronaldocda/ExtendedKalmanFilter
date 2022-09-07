;; Auto-generated. Do not edit!


(when (boundp 'comm_webots::receiver_get_emitter_direction)
  (if (not (find-package "COMM_WEBOTS"))
    (make-package "COMM_WEBOTS"))
  (shadow 'receiver_get_emitter_direction (find-package "COMM_WEBOTS")))
(unless (find-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTION")
  (make-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTION"))
(unless (find-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTIONREQUEST")
  (make-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTIONREQUEST"))
(unless (find-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTIONRESPONSE")
  (make-package "COMM_WEBOTS::RECEIVER_GET_EMITTER_DIRECTIONRESPONSE"))

(in-package "ROS")





(defclass comm_webots::receiver_get_emitter_directionRequest
  :super ros::object
  :slots (_ask ))

(defmethod comm_webots::receiver_get_emitter_directionRequest
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

(defclass comm_webots::receiver_get_emitter_directionResponse
  :super ros::object
  :slots (_direction ))

(defmethod comm_webots::receiver_get_emitter_directionResponse
  (:init
   (&key
    ((:direction __direction) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _direction __direction)
   self)
  (:direction
   (&optional __direction)
   (if __direction (setq _direction __direction)) _direction)
  (:serialization-length
   ()
   (+
    ;; float64[] _direction
    (* 8    (length _direction)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64[] _direction
     (write-long (length _direction) s)
     (dotimes (i (length _direction))
       (sys::poke (elt _direction i) (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64[] _direction
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _direction (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _direction i) (sys::peek buf ptr- :double)) (incf ptr- 8)
     ))
   ;;
   self)
  )

(defclass comm_webots::receiver_get_emitter_direction
  :super ros::object
  :slots ())

(setf (get comm_webots::receiver_get_emitter_direction :md5sum-) "cad5a90bedce22b568c949b40e9cc6e0")
(setf (get comm_webots::receiver_get_emitter_direction :datatype-) "comm_webots/receiver_get_emitter_direction")
(setf (get comm_webots::receiver_get_emitter_direction :request) comm_webots::receiver_get_emitter_directionRequest)
(setf (get comm_webots::receiver_get_emitter_direction :response) comm_webots::receiver_get_emitter_directionResponse)

(defmethod comm_webots::receiver_get_emitter_directionRequest
  (:response () (instance comm_webots::receiver_get_emitter_directionResponse :init)))

(setf (get comm_webots::receiver_get_emitter_directionRequest :md5sum-) "cad5a90bedce22b568c949b40e9cc6e0")
(setf (get comm_webots::receiver_get_emitter_directionRequest :datatype-) "comm_webots/receiver_get_emitter_directionRequest")
(setf (get comm_webots::receiver_get_emitter_directionRequest :definition-)
      "uint8 ask
---
float64[] direction

")

(setf (get comm_webots::receiver_get_emitter_directionResponse :md5sum-) "cad5a90bedce22b568c949b40e9cc6e0")
(setf (get comm_webots::receiver_get_emitter_directionResponse :datatype-) "comm_webots/receiver_get_emitter_directionResponse")
(setf (get comm_webots::receiver_get_emitter_directionResponse :definition-)
      "uint8 ask
---
float64[] direction

")



(provide :comm_webots/receiver_get_emitter_direction "cad5a90bedce22b568c949b40e9cc6e0")


