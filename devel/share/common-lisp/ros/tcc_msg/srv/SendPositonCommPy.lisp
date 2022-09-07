; Auto-generated. Do not edit!


(cl:in-package tcc_msg-srv)


;//! \htmlinclude SendPositonCommPy-request.msg.html

(cl:defclass <SendPositonCommPy-request> (roslisp-msg-protocol:ros-message)
  ((ask
    :reader ask
    :initarg :ask
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SendPositonCommPy-request (<SendPositonCommPy-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SendPositonCommPy-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SendPositonCommPy-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tcc_msg-srv:<SendPositonCommPy-request> is deprecated: use tcc_msg-srv:SendPositonCommPy-request instead.")))

(cl:ensure-generic-function 'ask-val :lambda-list '(m))
(cl:defmethod ask-val ((m <SendPositonCommPy-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tcc_msg-srv:ask-val is deprecated.  Use tcc_msg-srv:ask instead.")
  (ask m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SendPositonCommPy-request>) ostream)
  "Serializes a message object of type '<SendPositonCommPy-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ask) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SendPositonCommPy-request>) istream)
  "Deserializes a message object of type '<SendPositonCommPy-request>"
    (cl:setf (cl:slot-value msg 'ask) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SendPositonCommPy-request>)))
  "Returns string type for a service object of type '<SendPositonCommPy-request>"
  "tcc_msg/SendPositonCommPyRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SendPositonCommPy-request)))
  "Returns string type for a service object of type 'SendPositonCommPy-request"
  "tcc_msg/SendPositonCommPyRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SendPositonCommPy-request>)))
  "Returns md5sum for a message object of type '<SendPositonCommPy-request>"
  "acb524fbac00926fc8ce7e7c36ae4e03")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SendPositonCommPy-request)))
  "Returns md5sum for a message object of type 'SendPositonCommPy-request"
  "acb524fbac00926fc8ce7e7c36ae4e03")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SendPositonCommPy-request>)))
  "Returns full string definition for message of type '<SendPositonCommPy-request>"
  (cl:format cl:nil "bool ask~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SendPositonCommPy-request)))
  "Returns full string definition for message of type 'SendPositonCommPy-request"
  (cl:format cl:nil "bool ask~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SendPositonCommPy-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SendPositonCommPy-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SendPositonCommPy-request
    (cl:cons ':ask (ask msg))
))
;//! \htmlinclude SendPositonCommPy-response.msg.html

(cl:defclass <SendPositonCommPy-response> (roslisp-msg-protocol:ros-message)
  ((positions
    :reader positions
    :initarg :positions
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass SendPositonCommPy-response (<SendPositonCommPy-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SendPositonCommPy-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SendPositonCommPy-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tcc_msg-srv:<SendPositonCommPy-response> is deprecated: use tcc_msg-srv:SendPositonCommPy-response instead.")))

(cl:ensure-generic-function 'positions-val :lambda-list '(m))
(cl:defmethod positions-val ((m <SendPositonCommPy-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tcc_msg-srv:positions-val is deprecated.  Use tcc_msg-srv:positions instead.")
  (positions m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SendPositonCommPy-response>) ostream)
  "Serializes a message object of type '<SendPositonCommPy-response>"
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
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SendPositonCommPy-response>) istream)
  "Deserializes a message object of type '<SendPositonCommPy-response>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SendPositonCommPy-response>)))
  "Returns string type for a service object of type '<SendPositonCommPy-response>"
  "tcc_msg/SendPositonCommPyResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SendPositonCommPy-response)))
  "Returns string type for a service object of type 'SendPositonCommPy-response"
  "tcc_msg/SendPositonCommPyResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SendPositonCommPy-response>)))
  "Returns md5sum for a message object of type '<SendPositonCommPy-response>"
  "acb524fbac00926fc8ce7e7c36ae4e03")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SendPositonCommPy-response)))
  "Returns md5sum for a message object of type 'SendPositonCommPy-response"
  "acb524fbac00926fc8ce7e7c36ae4e03")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SendPositonCommPy-response>)))
  "Returns full string definition for message of type '<SendPositonCommPy-response>"
  (cl:format cl:nil "float32[] positions~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SendPositonCommPy-response)))
  "Returns full string definition for message of type 'SendPositonCommPy-response"
  (cl:format cl:nil "float32[] positions~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SendPositonCommPy-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'positions) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SendPositonCommPy-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SendPositonCommPy-response
    (cl:cons ':positions (positions msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SendPositonCommPy)))
  'SendPositonCommPy-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SendPositonCommPy)))
  'SendPositonCommPy-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SendPositonCommPy)))
  "Returns string type for a service object of type '<SendPositonCommPy>"
  "tcc_msg/SendPositonCommPy")