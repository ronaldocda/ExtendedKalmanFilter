// Generated by gencpp from file movement/node_reset_functionsRequest.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_NODE_RESET_FUNCTIONSREQUEST_H
#define MOVEMENT_MESSAGE_NODE_RESET_FUNCTIONSREQUEST_H


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
struct node_reset_functionsRequest_
{
  typedef node_reset_functionsRequest_<ContainerAllocator> Type;

  node_reset_functionsRequest_()
    : node(0)  {
    }
  node_reset_functionsRequest_(const ContainerAllocator& _alloc)
    : node(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;





  typedef boost::shared_ptr< ::movement::node_reset_functionsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::node_reset_functionsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_reset_functionsRequest_

typedef ::movement::node_reset_functionsRequest_<std::allocator<void> > node_reset_functionsRequest;

typedef boost::shared_ptr< ::movement::node_reset_functionsRequest > node_reset_functionsRequestPtr;
typedef boost::shared_ptr< ::movement::node_reset_functionsRequest const> node_reset_functionsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::node_reset_functionsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::node_reset_functionsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::node_reset_functionsRequest_<ContainerAllocator1> & lhs, const ::movement::node_reset_functionsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::node_reset_functionsRequest_<ContainerAllocator1> & lhs, const ::movement::node_reset_functionsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::node_reset_functionsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_reset_functionsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_reset_functionsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "364f76d0680a5475664d98abd705f036";
  }

  static const char* value(const ::movement::node_reset_functionsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x364f76d0680a5475ULL;
  static const uint64_t static_value2 = 0x664d98abd705f036ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/node_reset_functionsRequest";
  }

  static const char* value(const ::movement::node_reset_functionsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
;
  }

  static const char* value(const ::movement::node_reset_functionsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_reset_functionsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::node_reset_functionsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::node_reset_functionsRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_NODE_RESET_FUNCTIONSREQUEST_H
