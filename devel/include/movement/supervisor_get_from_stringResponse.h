// Generated by gencpp from file movement/supervisor_get_from_stringResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGRESPONSE_H
#define MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGRESPONSE_H


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
struct supervisor_get_from_stringResponse_
{
  typedef supervisor_get_from_stringResponse_<ContainerAllocator> Type;

  supervisor_get_from_stringResponse_()
    : node(0)  {
    }
  supervisor_get_from_stringResponse_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_get_from_stringResponse_

typedef ::movement::supervisor_get_from_stringResponse_<std::allocator<void> > supervisor_get_from_stringResponse;

typedef boost::shared_ptr< ::movement::supervisor_get_from_stringResponse > supervisor_get_from_stringResponsePtr;
typedef boost::shared_ptr< ::movement::supervisor_get_from_stringResponse const> supervisor_get_from_stringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator1> & lhs, const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator1> & lhs, const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/supervisor_get_from_stringResponse";
  }

  static const char* value(const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"\n"
;
  }

  static const char* value(const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_get_from_stringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::supervisor_get_from_stringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::supervisor_get_from_stringResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_SUPERVISOR_GET_FROM_STRINGRESPONSE_H
