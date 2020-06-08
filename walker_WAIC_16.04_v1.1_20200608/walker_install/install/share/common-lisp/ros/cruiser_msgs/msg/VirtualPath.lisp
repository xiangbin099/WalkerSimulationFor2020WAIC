; Auto-generated. Do not edit!


(cl:in-package cruiser_msgs-msg)


;//! \htmlinclude VirtualPath.msg.html

(cl:defclass <VirtualPath> (roslisp-msg-protocol:ros-message)
  ((info
    :reader info
    :initarg :info
    :type nav_msgs-msg:MapMetaData
    :initform (cl:make-instance 'nav_msgs-msg:MapMetaData))
   (paths
    :reader paths
    :initarg :paths
    :type (cl:vector nav_msgs-msg:Path)
   :initform (cl:make-array 0 :element-type 'nav_msgs-msg:Path :initial-element (cl:make-instance 'nav_msgs-msg:Path))))
)

(cl:defclass VirtualPath (<VirtualPath>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VirtualPath>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VirtualPath)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cruiser_msgs-msg:<VirtualPath> is deprecated: use cruiser_msgs-msg:VirtualPath instead.")))

(cl:ensure-generic-function 'info-val :lambda-list '(m))
(cl:defmethod info-val ((m <VirtualPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:info-val is deprecated.  Use cruiser_msgs-msg:info instead.")
  (info m))

(cl:ensure-generic-function 'paths-val :lambda-list '(m))
(cl:defmethod paths-val ((m <VirtualPath>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:paths-val is deprecated.  Use cruiser_msgs-msg:paths instead.")
  (paths m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VirtualPath>) ostream)
  "Serializes a message object of type '<VirtualPath>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'info) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'paths))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'paths))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VirtualPath>) istream)
  "Deserializes a message object of type '<VirtualPath>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'info) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'paths) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'paths)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'nav_msgs-msg:Path))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VirtualPath>)))
  "Returns string type for a message object of type '<VirtualPath>"
  "cruiser_msgs/VirtualPath")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VirtualPath)))
  "Returns string type for a message object of type 'VirtualPath"
  "cruiser_msgs/VirtualPath")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VirtualPath>)))
  "Returns md5sum for a message object of type '<VirtualPath>"
  "e3e3ef7994056f6ec8e1c2f63925b5ae")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VirtualPath)))
  "Returns md5sum for a message object of type 'VirtualPath"
  "e3e3ef7994056f6ec8e1c2f63925b5ae")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VirtualPath>)))
  "Returns full string definition for message of type '<VirtualPath>"
  (cl:format cl:nil "nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VirtualPath)))
  "Returns full string definition for message of type 'VirtualPath"
  (cl:format cl:nil "nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VirtualPath>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'info))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'paths) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VirtualPath>))
  "Converts a ROS message object to a list"
  (cl:list 'VirtualPath
    (cl:cons ':info (info msg))
    (cl:cons ':paths (paths msg))
))