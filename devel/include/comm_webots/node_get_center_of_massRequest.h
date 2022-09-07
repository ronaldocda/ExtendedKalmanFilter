// Generated by gencpp from file comm_webots/node_get_center_of_massRequest.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_GET_CENTER_OF_MASSREQUEST_H
#define COMM_WEBOTS_MESSAGE_NODE_GET_CENTER_OF_MASSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace comm_webots
{
template <class ContainerAllocator>
struct node_get_center_of_massRequest_
{
  typedef node_get_center_of_massRequest_<ContainerAllocator> Type;

  node_get_center_of_massRequest_()
    : node(0)  {
    }
  node_get_center_of_massRequest_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_center_of_massRequest_

typedef ::comm_webots::node_get_center_of_massRequest_<std::allocator<void> > node_get_center_of_massRequest;

typedef boost::shared_ptr< ::comm_webots::node_get_center_of_massRequest > node_get_center_of_massRequestPtr;
typedef boost::shared_ptr< ::comm_webots::node_get_center_of_massRequest const> node_get_center_of_massRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/node_get_center_of_massRequest";
  }

  static const char* value(const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
;
  }

  static const char* value(const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_center_of_massRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::node_get_center_of_massRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_GET_CENTER_OF_MASSREQUEST_H
