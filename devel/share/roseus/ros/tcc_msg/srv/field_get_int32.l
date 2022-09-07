;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::field_get_int32)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'field_get_int32 (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::FIELD_GET_INT32")
  (make-package "TCC_MSG::FIELD_GET_INT32"))
(unless (find-package "TCC_MSG::FIELD_GET_INT32REQUEST")
  (make-package "TCC_MSG::FIELD_GET_INT32REQUEST"))
(unless (find-package "TCC_MSG::FIELD_GET_INT32RESPONSE")
  (make-package "TCC_MSG::FIELD_GET_INT32RESPONSE"))

(in-package "ROS")





(defclass tcc_msg::field_get_int32Request
  :super ros::object
  :slots (_field _index ))

(defmethod tcc_msg::field_get_int32Request
  (:init
   (&key
    ((:field __field) 0)
    ((:index __index) 0)
    )
   (send-super :init)
   (setq _field (round __field))
   (setq _index (round __index))
   self)
  (:field
   (&optional __field)
   (if __field (setq _field __field)) _field)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:serialization-length
   ()
   (+
    ;; uint64 _field
    8
    ;; int32 _index
    4
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
     ;; int32 _index
       (write-long _index s)
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
   ;; int32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass tcc_msg::field_get_int32Response
  :super ros::object
  :slots (_value ))

(defmethod tcc_msg::field_get_int32Response
  (:init
   (&key
    ((:value __value) 0)
    )
   (send-super :init)
   (setq _value (round __value))
   self)
  (:value
   (&optional __value)
   (if __value (setq _value __value)) _value)
  (:serialization-length
   ()
   (+
    ;; int32 _value
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _value
       (write-long _value s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _value
     (setq _value (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass tcc_msg::field_get_int32
  :super ros::object
  :slots ())

(setf (get tcc_msg::field_get_int32 :md5sum-) "f5c94e53fe49e81de1151baa92dffdc5")
(setf (get tcc_msg::field_get_int32 :datatype-) "tcc_msg/field_get_int32")
(setf (get tcc_msg::field_get_int32 :request) tcc_msg::field_get_int32Request)
(setf (get tcc_msg::field_get_int32 :response) tcc_msg::field_get_int32Response)

(defmethod tcc_msg::field_get_int32Request
  (:response () (instance tcc_msg::field_get_int32Response :init)))

(setf (get tcc_msg::field_get_int32Request :md5sum-) "f5c94e53fe49e81de1151baa92dffdc5")
(setf (get tcc_msg::field_get_int32Request :datatype-) "tcc_msg/field_get_int32Request")
(setf (get tcc_msg::field_get_int32Request :definition-)
      "uint64 field
int32 index
---
int32 value

")

(setf (get tcc_msg::field_get_int32Response :md5sum-) "f5c94e53fe49e81de1151baa92dffdc5")
(setf (get tcc_msg::field_get_int32Response :datatype-) "tcc_msg/field_get_int32Response")
(setf (get tcc_msg::field_get_int32Response :definition-)
      "uint64 field
int32 index
---
int32 value

")



(provide :tcc_msg/field_get_int32 "f5c94e53fe49e81de1151baa92dffdc5")


