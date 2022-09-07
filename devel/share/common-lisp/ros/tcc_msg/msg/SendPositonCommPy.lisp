; Auto-generated. Do not edit!


(cl:in-package tcc_msg-msg)


;//! \htmlinclude SendPositonCommPy.msg.html

(cl:defclass <SendPositonCommPy> (roslisp-msg-protocol:ros-message)
  ((positions
    :reader positions
    :initarg :positions
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass SendPositonCommPy (<SendPositonCommPy>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SendPositonCommPy>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SendPositonCommPy)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tcc_msg-msg:<SendPositonCommPy> is deprecated: use tcc_msg-msg:SendPositonCommPy instead.")))

(cl:ensure-generic-function 'positions-val :lambda-list '(m))
(cl:defmethod positions-val ((m <SendPositonCommPy>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tcc_msg-msg:positions-val is deprecated.  Use tcc_msg-msg:positions instead.")
  (positions m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SendPositonCommPy>) ostream)
  "Serializes a message object of type '<SendPositonCommPy>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'positions))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'positions))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SendPositonCommPy>) istream)
  "Deserializes a message object of type '<SendPositonCommPy>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'positions) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'positions)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SendPositonCommPy>)))
  "Returns string type for a message object of type '<SendPositonCommPy>"
  "tcc_msg/SendPositonCommPy")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SendPositonCommPy)))
  "Returns string type for a message object of type 'SendPositonCommPy"
  "tcc_msg/SendPositonCommPy")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SendPositonCommPy>)))
  "Returns md5sum for a message object of type '<SendPositonCommPy>"
  "500517ac65e26e2ba75ed60def015c0a")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SendPositonCommPy)))
  "Returns md5sum for a message object of type 'SendPositonCommPy"
  "500517ac65e26e2ba75ed60def015c0a")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SendPositonCommPy>)))
  "Returns full string definition for message of type '<SendPositonCommPy>"
  (cl:format cl:nil "float32[] positions~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SendPositonCommPy)))
  "Returns full string definition for message of type 'SendPositonCommPy"
  (cl:format cl:nil "float32[] positions~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SendPositonCommPy>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'positions) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SendPositonCommPy>))
  "Converts a ROS message object to a list"
  (cl:list 'SendPositonCommPy
    (cl:cons ':positions (positions msg))
))
