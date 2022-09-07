// Generated by gencpp from file tcc_msg/supervisor_get_from_idResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_IDRESPONSE_H
#define TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_IDRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tcc_msg
{
template <class ContainerAllocator>
struct supervisor_get_from_idResponse_
{
  typedef supervisor_get_from_idResponse_<ContainerAllocator> Type;

  supervisor_get_from_idResponse_()
    : node(0)  {
    }
  supervisor_get_from_idResponse_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_get_from_idResponse_

typedef ::tcc_msg::supervisor_get_from_idResponse_<std::allocator<void> > supervisor_get_from_idResponse;

typedef boost::shared_ptr< ::tcc_msg::supervisor_get_from_idResponse > supervisor_get_from_idResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::supervisor_get_from_idResponse const> supervisor_get_from_idResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/supervisor_get_from_idResponse";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"\n"
;
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_get_from_idResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::supervisor_get_from_idResponse_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_IDRESPONSE_H
