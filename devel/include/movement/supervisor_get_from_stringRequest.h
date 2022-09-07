// Generated by gencpp from file movement/supervisor_get_from_stringRequest.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGREQUEST_H
#define MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGREQUEST_H


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
struct supervisor_get_from_stringRequest_
{
  typedef supervisor_get_from_stringRequest_<ContainerAllocator> Type;

  supervisor_get_from_stringRequest_()
    : value()  {
    }
  supervisor_get_from_stringRequest_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_get_from_stringRequest_

typedef ::movement::supervisor_get_from_stringRequest_<std::allocator<void> > supervisor_get_from_stringRequest;

typedef boost::shared_ptr< ::movement::supervisor_get_from_stringRequest > supervisor_get_from_stringRequestPtr;
typedef boost::shared_ptr< ::movement::supervisor_get_from_stringRequest const> supervisor_get_from_stringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator1> & lhs, const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator1> & lhs, const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "64e58419496c7248b4ef25731f88b8c3";
  }

  static const char* value(const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x64e58419496c7248ULL;
  static const uint64_t static_value2 = 0xb4ef25731f88b8c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/supervisor_get_from_stringRequest";
  }

  static const char* value(const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string value\n"
;
  }

  static const char* value(const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_get_from_stringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::supervisor_get_from_stringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::supervisor_get_from_stringRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGREQUEST_H
