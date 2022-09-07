// Generated by gencpp from file tcc_msg/node_set_joint_positionRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_SET_JOINT_POSITIONREQUEST_H
#define TCC_MSG_MESSAGE_NODE_SET_JOINT_POSITIONREQUEST_H


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
struct node_set_joint_positionRequest_
{
  typedef node_set_joint_positionRequest_<ContainerAllocator> Type;

  node_set_joint_positionRequest_()
    : node(0)
    , position(0.0)
    , index(0)  {
    }
  node_set_joint_positionRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , position(0.0)
    , index(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef double _position_type;
  _position_type position;

   typedef int32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_set_joint_positionRequest_

typedef ::tcc_msg::node_set_joint_positionRequest_<std::allocator<void> > node_set_joint_positionRequest;

typedef boost::shared_ptr< ::tcc_msg::node_set_joint_positionRequest > node_set_joint_positionRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::node_set_joint_positionRequest const> node_set_joint_positionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.position == rhs.position &&
    lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cae15c1d507db8a044c5153d82370ba9";
  }

  static const char* value(const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcae15c1d507db8a0ULL;
  static const uint64_t static_value2 = 0x44c5153d82370ba9ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/node_set_joint_positionRequest";
  }

  static const char* value(const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"float64 position\n"
"int32 index\n"
;
  }

  static const char* value(const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.position);
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_set_joint_positionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::node_set_joint_positionRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_SET_JOINT_POSITIONREQUEST_H
