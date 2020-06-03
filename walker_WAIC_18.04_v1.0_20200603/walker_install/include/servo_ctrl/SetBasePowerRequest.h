// Generated by gencpp from file servo_ctrl/SetBasePowerRequest.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_SETBASEPOWERREQUEST_H
#define SERVO_CTRL_MESSAGE_SETBASEPOWERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace servo_ctrl
{
template <class ContainerAllocator>
struct SetBasePowerRequest_
{
  typedef SetBasePowerRequest_<ContainerAllocator> Type;

  SetBasePowerRequest_()
    : cmd()  {
    }
  SetBasePowerRequest_(const ContainerAllocator& _alloc)
    : cmd(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _cmd_type;
  _cmd_type cmd;





  typedef boost::shared_ptr< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetBasePowerRequest_

typedef ::servo_ctrl::SetBasePowerRequest_<std::allocator<void> > SetBasePowerRequest;

typedef boost::shared_ptr< ::servo_ctrl::SetBasePowerRequest > SetBasePowerRequestPtr;
typedef boost::shared_ptr< ::servo_ctrl::SetBasePowerRequest const> SetBasePowerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace servo_ctrl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "774f1f64eea937f4ca5b6e9a998abcb5";
  }

  static const char* value(const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x774f1f64eea937f4ULL;
  static const uint64_t static_value2 = 0xca5b6e9a998abcb5ULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_ctrl/SetBasePowerRequest";
  }

  static const char* value(const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] cmd\n"
;
  }

  static const char* value(const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetBasePowerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_ctrl::SetBasePowerRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd[]" << std::endl;
    for (size_t i = 0; i < v.cmd.size(); ++i)
    {
      s << indent << "  cmd[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.cmd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_SETBASEPOWERREQUEST_H