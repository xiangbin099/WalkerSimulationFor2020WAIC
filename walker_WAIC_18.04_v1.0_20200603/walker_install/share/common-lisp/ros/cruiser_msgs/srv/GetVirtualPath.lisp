; Auto-generated. Do not edit!


(cl:in-package cruiser_msgs-srv)


;//! \htmlinclude GetVirtualPath-request.msg.html

(cl:defclass <GetVirtualPath-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetVirtualPath-request (<GetVirtualPath-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetVirtualPath-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetVirtualPath-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cruiser_msgs-srv:<GetVirtualPath-request> is deprecated: use cruiser_msgs-srv:GetVirtualPath-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetVirtualPath-request>) ostream)
  "Serializes a message object of type '<GetVirtualPath-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetVirtualPath-request>) istream)
  "Deserializes a message object of type '<GetVirtualPath-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetVirtualPath-request>)))
  "Returns string type for a service object of type '<GetVirtualPath-request>"
  "cruiser_msgs/GetVirtualPathRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetVirtualPath-request)))
  "Returns string type for a service object of type 'GetVirtualPath-request"
  "cruiser_msgs/GetVirtualPathRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetVirtualPath-request>)))
  "Returns md5sum for a message object of type '<GetVirtualPath-request>"
  "efa773451ece228573f2fb4e72387f99")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetVirtualPath-request)))
  "Returns md5sum for a message object of type 'GetVirtualPath-request"
  "efa773451ece228573f2fb4e72387f99")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetVirtualPath-request>)))
  "Returns full string definition for message of type '<GetVirtualPath-request>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetVirtualPath-request)))
  "Returns full string definition for message of type 'GetVirtualPath-request"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetVirtualPath-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetVirtualPath-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetVirtualPath-request
))
;//! \htmlinclude GetVirtualPath-response.msg.html

(cl:defclass <GetVirtualPath-response> (roslisp-msg-protocol:ros-message)
  ((path
    :reader path
    :initarg :path
    :type cruiser_msgs-msg:VirtualPath
    :initform (cl:make-instance 'cruiser_msgs-msg:VirtualPath)))
)

(cl:defclass GetVirtualPath-response (<GetVirtualPath-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetVirtualPath-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetVirtualPath-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cruiser_msgs-srv:<GetVirtualPath-response> is deprecated: use cruiser_msgs-srv:GetVirtualPath-response instead.")))

(cl:ensure-generic-function 'path-val :lambda-list '(m))
(cl:defmethod path-val ((m <GetVirtualPath-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-srv:path-val is deprecated.  Use cruiser_msgs-srv:path instead.")
  (path m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetVirtualPath-response>) ostream)
  "Serializes a message object of type '<GetVirtualPath-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'path) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetVirtualPath-response>) istream)
  "Deserializes a message object of type '<GetVirtualPath-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'path) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetVirtualPath-response>)))
  "Returns string type for a service object of type '<GetVirtualPath-response>"
  "cruiser_msgs/GetVirtualPathResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetVirtualPath-response)))
  "Returns string type for a service object of type 'GetVirtualPath-response"
  "cruiser_msgs/GetVirtualPathResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetVirtualPath-response>)))
  "Returns md5sum for a message object of type '<GetVirtualPath-response>"
  "efa773451ece228573f2fb4e72387f99")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetVirtualPath-response)))
  "Returns md5sum for a message object of type 'GetVirtualPath-response"
  "efa773451ece228573f2fb4e72387f99")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetVirtualPath-response>)))
  "Returns full string definition for message of type '<GetVirtualPath-response>"
  (cl:format cl:nil "cruiser_msgs/VirtualPath path~%~%~%================================================================================~%MSG: cruiser_msgs/VirtualPath~%nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetVirtualPath-response)))
  "Returns full string definition for message of type 'GetVirtualPath-response"
  (cl:format cl:nil "cruiser_msgs/VirtualPath path~%~%~%================================================================================~%MSG: cruiser_msgs/VirtualPath~%nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetVirtualPath-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'path))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetVirtualPath-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetVirtualPath-response
    (cl:cons ':path (path msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetVirtualPath)))
  'GetVirtualPath-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetVirtualPath)))
  'GetVirtualPath-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetVirtualPath)))
  "Returns string type for a service object of type '<GetVirtualPath>"
  "cruiser_msgs/GetVirtualPath")