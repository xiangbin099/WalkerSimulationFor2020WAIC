// Generated by gencpp from file cruiser_msgs/ClearUwbAnchorResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CLEARUWBANCHORRESPONSE_H
#define CRUISER_MSGS_MESSAGE_CLEARUWBANCHORRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cruiser_msgs
{
template <class ContainerAllocator>
struct ClearUwbAnchorResponse_
{
  typedef ClearUwbAnchorResponse_<ContainerAllocator> Type;

  ClearUwbAnchorResponse_()
    : success(false)  {
    }
  ClearUwbAnchorResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ClearUwbAnchorResponse_

typedef ::cruiser_msgs::ClearUwbAnchorResponse_<std::allocator<void> > ClearUwbAnchorResponse;

typedef boost::shared_ptr< ::cruiser_msgs::ClearUwbAnchorResponse > ClearUwbAnchorResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::ClearUwbAnchorResponse const> ClearUwbAnchorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/ClearUwbAnchorResponse";
  }

  static const char* value(const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClearUwbAnchorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::ClearUwbAnchorResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CLEARUWBANCHORRESPONSE_H