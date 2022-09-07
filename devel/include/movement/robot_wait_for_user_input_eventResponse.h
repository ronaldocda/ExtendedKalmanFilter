// Generated by gencpp from file movement/robot_wait_for_user_input_eventResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTRESPONSE_H
#define MOVEMENT_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace movement
{
template <class ContainerAllocator>
struct robot_wait_for_user_input_eventResponse_
{
  typedef robot_wait_for_user_input_eventResponse_<ContainerAllocator> Type;

  robot_wait_for_user_input_eventResponse_()
    : event(0)  {
    }
  robot_wait_for_user_input_eventResponse_(const ContainerAllocator& _alloc)
    : event(0)  {
  (void)_alloc;
    }



   typedef int32_t _event_type;
  _event_type event;





  typedef boost::shared_ptr< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> const> ConstPtr;

}; // struct robot_wait_for_user_input_eventResponse_

typedef ::movement::robot_wait_for_user_input_eventResponse_<std::allocator<void> > robot_wait_for_user_input_eventResponse;

typedef boost::shared_ptr< ::movement::robot_wait_for_user_input_eventResponse > robot_wait_for_user_input_eventResponsePtr;
typedef boost::shared_ptr< ::movement::robot_wait_for_user_input_eventResponse const> robot_wait_for_user_input_eventResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator1> & lhs, const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator2> & rhs)
{
  return lhs.event == rhs.event;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator1> & lhs, const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b2a9c605bb7a420089b02c6063322298";
  }

  static const char* value(const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb2a9c605bb7a4200ULL;
  static const uint64_t static_value2 = 0x89b02c6063322298ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/robot_wait_for_user_input_eventResponse";
  }

  static const char* value(const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 event\n"
"\n"
;
  }

  static const char* value(const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.event);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct robot_wait_for_user_input_eventResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::robot_wait_for_user_input_eventResponse_<ContainerAllocator>& v)
  {
    s << indent << "event: ";
    Printer<int32_t>::stream(s, indent + "  ", v.event);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_ROBOT_WAIT_FOR_USER_INPUT_EVENTRESPONSE_H
