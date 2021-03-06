// Generated by gencpp from file cruiser_msgs/cruiserChargeSource.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERCHARGESOURCE_H
#define CRUISER_MSGS_MESSAGE_CRUISERCHARGESOURCE_H


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
struct cruiserChargeSource_
{
  typedef cruiserChargeSource_<ContainerAllocator> Type;

  cruiserChargeSource_()
    : charge_source(0)  {
    }
  cruiserChargeSource_(const ContainerAllocator& _alloc)
    : charge_source(0)  {
  (void)_alloc;
    }



   typedef uint32_t _charge_source_type;
  _charge_source_type charge_source;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserChargeSource_

typedef ::cruiser_msgs::cruiserChargeSource_<std::allocator<void> > cruiserChargeSource;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserChargeSource > cruiserChargeSourcePtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserChargeSource const> cruiserChargeSourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator2> & rhs)
{
  return lhs.charge_source == rhs.charge_source;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "13f65a61a1eae98cfcb8a07995a5d081";
  }

  static const char* value(const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x13f65a61a1eae98cULL;
  static const uint64_t static_value2 = 0xfcb8a07995a5d081ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserChargeSource";
  }

  static const char* value(const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 charge_source\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.charge_source);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserChargeSource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserChargeSource_<ContainerAllocator>& v)
  {
    s << indent << "charge_source: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.charge_source);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERCHARGESOURCE_H
