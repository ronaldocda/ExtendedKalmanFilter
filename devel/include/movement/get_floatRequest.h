// Generated by gencpp from file movement/get_floatRequest.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_GET_FLOATREQUEST_H
#define MOVEMENT_MESSAGE_GET_FLOATREQUEST_H


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
struct get_floatRequest_
{
  typedef get_floatRequest_<ContainerAllocator> Type;

  get_floatRequest_()
    : ask(false)  {
    }
  get_floatRequest_(const ContainerAllocator& _alloc)
    : ask(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::movement::get_floatRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::get_floatRequest_<ContainerAllocator> const> ConstPtr;

}; // struct get_floatRequest_

typedef ::movement::get_floatRequest_<std::allocator<void> > get_floatRequest;

typedef boost::shared_ptr< ::movement::get_floatRequest > get_floatRequestPtr;
typedef boost::shared_ptr< ::movement::get_floatRequest const> get_floatRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::get_floatRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::get_floatRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::get_floatRequest_<ContainerAllocator1> & lhs, const ::movement::get_floatRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::get_floatRequest_<ContainerAllocator1> & lhs, const ::movement::get_floatRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::get_floatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::get_floatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::get_floatRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::get_floatRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::get_floatRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::get_floatRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbe9700edfca44c5eefb040d9b60f6d6";
  }

  static const char* value(const ::movement::get_floatRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbe9700edfca44c5ULL;
  static const uint64_t static_value2 = 0xeefb040d9b60f6d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/get_floatRequest";
  }

  static const char* value(const ::movement::get_floatRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::get_floatRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ask\n"
;
  }

  static const char* value(const ::movement::get_floatRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::get_floatRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_floatRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::get_floatRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::get_floatRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_GET_FLOATREQUEST_H
