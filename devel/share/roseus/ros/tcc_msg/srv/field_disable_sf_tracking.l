;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::field_disable_sf_tracking)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'field_disable_sf_tracking (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::FIELD_DISABLE_SF_TRACKING")
  (make-package "TCC_MSG::FIELD_DISABLE_SF_TRACKING"))
(unless (find-package "TCC_MSG::FIELD_DISABLE_SF_TRACKINGREQUEST")
  (make-package "TCC_MSG::FIELD_DISABLE_SF_TRACKINGREQUEST"))
(unless (find-package "TCC_MSG::FIELD_DISABLE_SF_TRACKINGRESPONSE")
  (make-package "TCC_MSG::FIELD_DISABLE_SF_TRACKINGRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::field_disable_sf_trackingRequest
  :super ros::object
  :slots (_field ))

(defmethod tcc_msg::field_disable_sf_trackingRequest
  (:init
   (&key
    ((:field __field) 0)
    )
   (send-super :init)
   (setq _field (round __field))
   self)
  (:field
   (&optional __field)
   (if __field (setq _field __field)) _field)
  (:serialization-length
   ()
   (+
    ;; uint64 _field
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _field
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _field (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _field) (= (length (_field . bv)) 2)) ;; bignum
              (write-long (ash (elt (_field . bv) 0) 0) s)
              (write-long (ash (elt (_field . bv) 1) -1) s))
             ((and (class _field) (= (length (_field . bv)) 1)) ;; big1
              (write-long (elt (_field . bv) 0) s)
              (write-long (if (>= _field 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _field s)(write-long (if (>= _field 0) 0 #xffffffff) s)))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _field
     
#+(or :alpha :irix6 :x86_64)
      (setf _field (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _field (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;;
   self)
  )

(defclass tcc_msg::field_disable_sf_trackingResponse
  :super ros::object
  :slots (_success ))

(defmethod tcc_msg::field_disable_sf_trackingResponse
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

(defclass tcc_msg::field_disable_sf_tracking
  :super ros::object
  :slots ())

(setf (get tcc_msg::field_disable_sf_tracking :md5sum-) "d466ca5c1e4695154072bfb73f0f9e1f")
(setf (get tcc_msg::field_disable_sf_tracking :datatype-) "tcc_msg/field_disable_sf_tracking")
(setf (get tcc_msg::field_disable_sf_tracking :request) tcc_msg::field_disable_sf_trackingRequest)
(setf (get tcc_msg::field_disable_sf_tracking :response) tcc_msg::field_disable_sf_trackingResponse)

(defmethod tcc_msg::field_disable_sf_trackingRequest
  (:response () (instance tcc_msg::field_disable_sf_trackingResponse :init)))

(setf (get tcc_msg::field_disable_sf_trackingRequest :md5sum-) "d466ca5c1e4695154072bfb73f0f9e1f")
(setf (get tcc_msg::field_disable_sf_trackingRequest :datatype-) "tcc_msg/field_disable_sf_trackingRequest")
(setf (get tcc_msg::field_disable_sf_trackingRequest :definition-)
      "uint64 field
---
int8 success

")

(setf (get tcc_msg::field_disable_sf_trackingResponse :md5sum-) "d466ca5c1e4695154072bfb73f0f9e1f")
(setf (get tcc_msg::field_disable_sf_trackingResponse :datatype-) "tcc_msg/field_disable_sf_trackingResponse")
(setf (get tcc_msg::field_disable_sf_trackingResponse :definition-)
      "uint64 field
---
int8 success

")



(provide :tcc_msg/field_disable_sf_tracking "d466ca5c1e4695154072bfb73f0f9e1f")


