;; Auto-generated. Do not edit!


(when (boundp 'tcc_msg::node_get_field_by_index)
  (if (not (find-package "TCC_MSG"))
    (make-package "TCC_MSG"))
  (shadow 'node_get_field_by_index (find-package "TCC_MSG")))
(unless (find-package "TCC_MSG::NODE_GET_FIELD_BY_INDEX")
  (make-package "TCC_MSG::NODE_GET_FIELD_BY_INDEX"))
(unless (find-package "TCC_MSG::NODE_GET_FIELD_BY_INDEXREQUEST")
  (make-package "TCC_MSG::NODE_GET_FIELD_BY_INDEXREQUEST"))
(unless (find-package "TCC_MSG::NODE_GET_FIELD_BY_INDEXRESPONSE")
  (make-package "TCC_MSG::NODE_GET_FIELD_BY_INDEXRESPONSE"))

(in-package "ROS")





(defclass tcc_msg::node_get_field_by_indexRequest
  :super ros::object
  :slots (_node _index _proto ))

(defmethod tcc_msg::node_get_field_by_indexRequest
  (:init
   (&key
    ((:node __node) 0)
    ((:index __index) 0)
    ((:proto __proto) nil)
    )
   (send-super :init)
   (setq _node (round __node))
   (setq _index (round __index))
   (setq _proto __proto)
   self)
  (:node
   (&optional __node)
   (if __node (setq _node __node)) _node)
  (:index
   (&optional __index)
   (if __index (setq _index __index)) _index)
  (:proto
   (&optional (__proto :null))
   (if (not (eq __proto :null)) (setq _proto __proto)) _proto)
  (:serialization-length
   ()
   (+
    ;; uint64 _node
    8
    ;; uint32 _index
    4
    ;; bool _proto
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint64 _node
#+(or :alpha :irix6 :x86_64)
       (progn (sys::poke _node (send s :buffer) (send s :count) :long) (incf (stream-count s) 8))
#-(or :alpha :irix6 :x86_64)
       (cond ((and (class _node) (= (length (_node . bv)) 2)) ;; bignum
              (write-long (ash (elt (_node . bv) 0) 0) s)
              (write-long (ash (elt (_node . bv) 1) -1) s))
             ((and (class _node) (= (length (_node . bv)) 1)) ;; big1
              (write-long (elt (_node . bv) 0) s)
              (write-long (if (>= _node 0) 0 #xffffffff) s))
             (t                                         ;; integer
              (write-long _node s)(write-long (if (>= _node 0) 0 #xffffffff) s)))
     ;; uint32 _index
       (write-long _index s)
     ;; bool _proto
       (if _proto (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint64 _node
     
#+(or :alpha :irix6 :x86_64)
      (setf _node (prog1 (sys::peek buf ptr- :long) (incf ptr- 8)))
#-(or :alpha :irix6 :x86_64)
      (setf _node (let ((b0 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4)))
                  (b1 (prog1 (sys::peek buf ptr- :integer) (incf ptr- 4))))
              (cond ((= b1 -1) b0)
                     ((and (= b1  0)
                           (<= lisp::most-negative-fixnum b0 lisp::most-positive-fixnum))
                      b0)
                    ((= b1  0) (make-instance bignum :size 1 :bv (integer-vector b0)))
                    (t (make-instance bignum :size 2 :bv (integer-vector b0 (ash b1 1)))))))
   ;; uint32 _index
     (setq _index (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _proto
     (setq _proto (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass tcc_msg::node_get_field_by_indexResponse
  :super ros::object
  :slots (_field ))

(defmethod tcc_msg::node_get_field_by_indexResponse
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

(defclass tcc_msg::node_get_field_by_index
  :super ros::object
  :slots ())

(setf (get tcc_msg::node_get_field_by_index :md5sum-) "24bbfc7fa321c886f58114d630e6f1fb")
(setf (get tcc_msg::node_get_field_by_index :datatype-) "tcc_msg/node_get_field_by_index")
(setf (get tcc_msg::node_get_field_by_index :request) tcc_msg::node_get_field_by_indexRequest)
(setf (get tcc_msg::node_get_field_by_index :response) tcc_msg::node_get_field_by_indexResponse)

(defmethod tcc_msg::node_get_field_by_indexRequest
  (:response () (instance tcc_msg::node_get_field_by_indexResponse :init)))

(setf (get tcc_msg::node_get_field_by_indexRequest :md5sum-) "24bbfc7fa321c886f58114d630e6f1fb")
(setf (get tcc_msg::node_get_field_by_indexRequest :datatype-) "tcc_msg/node_get_field_by_indexRequest")
(setf (get tcc_msg::node_get_field_by_indexRequest :definition-)
      "uint64 node
uint32 index
bool proto
---
uint64 field

")

(setf (get tcc_msg::node_get_field_by_indexResponse :md5sum-) "24bbfc7fa321c886f58114d630e6f1fb")
(setf (get tcc_msg::node_get_field_by_indexResponse :datatype-) "tcc_msg/node_get_field_by_indexResponse")
(setf (get tcc_msg::node_get_field_by_indexResponse :definition-)
      "uint64 node
uint32 index
bool proto
---
uint64 field

")



(provide :tcc_msg/node_get_field_by_index "24bbfc7fa321c886f58114d630e6f1fb")


