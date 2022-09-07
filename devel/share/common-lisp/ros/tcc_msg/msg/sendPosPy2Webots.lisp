; Auto-generated. Do not edit!


(cl:in-package tcc_msg-msg)


;//! \htmlinclude sendPosPy2Webots.msg.html

(cl:defclass <sendPosPy2Webots> (roslisp-msg-protocol:ros-message)
  ((positions
    :reader positions
    :initarg :positions
    :type (cl:vector cl:float)
   :initform (cl:make-array 12 :element-type 'cl:float :initial-element 0.0))
   (velocity
    :reader velocity
    :initarg :velocity
    :type (cl:vector cl:fixnum)
   :initform (cl:make-array 12 :element-type 'cl:fixnum :initial-element 0)))
)

(cl:defclass sendPosPy2Webots (<sendPosPy2Webots>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <sendPosPy2Webots>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'sendPosPy2Webots)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tcc_msg-msg:<sendPosPy2Webots> is deprecated: use tcc_msg-msg:sendPosPy2Webots instead.")))

(cl:ensure-generic-function 'positions-val :lambda-list '(m))
(cl:defmethod positions-val ((m <sendPosPy2Webots>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tcc_msg-msg:positions-val is deprecated.  Use tcc_msg-msg:positions instead.")
  (positions m))

(cl:ensure-generic-function 'velocity-val :lambda-list '(m))
(cl:defmethod velocity-val ((m <sendPosPy2Webots>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tcc_msg-msg:velocity-val is deprecated.  Use tcc_msg-msg:velocity instead.")
  (velocity m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <sendPosPy2Webots>) ostream)
  "Serializes a message object of type '<sendPosPy2Webots>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'positions))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 65536) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    ))
   (cl:slot-value msg 'velocity))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <sendPosPy2Webots>) istream)
  "Deserializes a message object of type '<sendPosPy2Webots>"
  (cl:setf (cl:slot-value msg 'positions) (cl:make-array 12))
  (cl:let ((vals (cl:slot-value msg 'positions)))
    (cl:dotimes (i 12)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  (cl:setf (cl:slot-value msg 'velocity) (cl:make-array 12))
  (cl:let ((vals (cl:slot-value msg 'velocity)))
    (cl:dotimes (i 12)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 32768) unsigned (cl:- unsigned 65536))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<sendPosPy2Webots>)))
  "Returns string type for a message object of type '<sendPosPy2Webots>"
  "tcc_msg/sendPosPy2Webots")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'sendPosPy2Webots)))
  "Returns string type for a message object of type 'sendPosPy2Webots"
  "tcc_msg/sendPosPy2Webots")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<sendPosPy2Webots>)))
  "Returns md5sum for a message object of type '<sendPosPy2Webots>"
  "502a1295b892f5068b280d9a9d0ad702")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'sendPosPy2Webots)))
  "Returns md5sum for a message object of type 'sendPosPy2Webots"
  "502a1295b892f5068b280d9a9d0ad702")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<sendPosPy2Webots>)))
  "Returns full string definition for message of type '<sendPosPy2Webots>"
  (cl:format cl:nil "float64[12] positions~%int16[12] velocity~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'sendPosPy2Webots)))
  "Returns full string definition for message of type 'sendPosPy2Webots"
  (cl:format cl:nil "float64[12] positions~%int16[12] velocity~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <sendPosPy2Webots>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'positions) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'velocity) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 2)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <sendPosPy2Webots>))
  "Converts a ROS message object to a list"
  (cl:list 'sendPosPy2Webots
    (cl:cons ':positions (positions msg))
    (cl:cons ':velocity (velocity msg))
))
