// Generated by gencpp from file comm_webots/node_set_visibilityRequest.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_SET_VISIBILITYREQUEST_H
#define COMM_WEBOTS_MESSAGE_NODE_SET_VISIBILITYREQUEST_H


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
struct node_set_visibilityRequest_
{
  typedef node_set_visibilityRequest_<ContainerAllocator> Type;

  node_set_visibilityRequest_()
    : node(0)
    , from(0)
    , visible(0)  {
    }
  node_set_visibilityRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , from(0)
    , visible(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef uint64_t _from_type;
  _from_type from;

   typedef uint8_t _visible_type;
  _visible_type visible;





  typedef boost::shared_ptr< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_set_visibilityRequest_

typedef ::comm_webots::node_set_visibilityRequest_<std::allocator<void> > node_set_visibilityRequest;

typedef boost::shared_ptr< ::comm_webots::node_set_visibilityRequest > node_set_visibilityRequestPtr;
typedef boost::shared_ptr< ::comm_webots::node_set_visibilityRequest const> node_set_visibilityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator1> & lhs, const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.from == rhs.from &&
    lhs.visible == rhs.visible;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator1> & lhs, const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "66754c396b86bd9c8375b973a4e698ec";
  }

  static const char* value(const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x66754c396b86bd9cULL;
  static const uint64_t static_value2 = 0x8375b973a4e698ecULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/node_set_visibilityRequest";
  }

  static const char* value(const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"uint64 from\n"
"uint8 visible\n"
;
  }

  static const char* value(const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.from);
      stream.next(m.visible);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_set_visibilityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::node_set_visibilityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::node_set_visibilityRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "from: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.from);
    s << indent << "visible: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.visible);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_SET_VISIBILITYREQUEST_H
