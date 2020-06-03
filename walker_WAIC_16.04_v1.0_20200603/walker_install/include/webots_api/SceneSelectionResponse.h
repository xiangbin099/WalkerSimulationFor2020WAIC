// Generated by gencpp from file webots_api/SceneSelectionResponse.msg
// DO NOT EDIT!


#ifndef WEBOTS_API_MESSAGE_SCENESELECTIONRESPONSE_H
#define WEBOTS_API_MESSAGE_SCENESELECTIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_api
{
template <class ContainerAllocator>
struct SceneSelectionResponse_
{
  typedef SceneSelectionResponse_<ContainerAllocator> Type;

  SceneSelectionResponse_()
    : success(false)  {
    }
  SceneSelectionResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::webots_api::SceneSelectionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_api::SceneSelectionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SceneSelectionResponse_

typedef ::webots_api::SceneSelectionResponse_<std::allocator<void> > SceneSelectionResponse;

typedef boost::shared_ptr< ::webots_api::SceneSelectionResponse > SceneSelectionResponsePtr;
typedef boost::shared_ptr< ::webots_api::SceneSelectionResponse const> SceneSelectionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_api::SceneSelectionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_api

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_api::SceneSelectionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_api::SceneSelectionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_api::SceneSelectionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::webots_api::SceneSelectionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_api/SceneSelectionResponse";
  }

  static const char* value(const ::webots_api::SceneSelectionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const ::webots_api::SceneSelectionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SceneSelectionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_api::SceneSelectionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_api::SceneSelectionResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_API_MESSAGE_SCENESELECTIONRESPONSE_H