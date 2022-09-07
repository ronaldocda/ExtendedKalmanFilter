// Generated by gencpp from file tcc_msg/node_add_force_or_torqueRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_ADD_FORCE_OR_TORQUEREQUEST_H
#define TCC_MSG_MESSAGE_NODE_ADD_FORCE_OR_TORQUEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace tcc_msg
{
template <class ContainerAllocator>
struct node_add_force_or_torqueRequest_
{
  typedef node_add_force_or_torqueRequest_<ContainerAllocator> Type;

  node_add_force_or_torqueRequest_()
    : node(0)
    , force()
    , relative(0)  {
    }
  node_add_force_or_torqueRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , force(_alloc)
    , relative(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef uint8_t _relative_type;
  _relative_type relative;





  typedef boost::shared_ptr< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_add_force_or_torqueRequest_

typedef ::tcc_msg::node_add_force_or_torqueRequest_<std::allocator<void> > node_add_force_or_torqueRequest;

typedef boost::shared_ptr< ::tcc_msg::node_add_force_or_torqueRequest > node_add_force_or_torqueRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::node_add_force_or_torqueRequest const> node_add_force_or_torqueRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.force == rhs.force &&
    lhs.relative == rhs.relative;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "112ea7d5080c558fe970905c397f106e";
  }

  static const char* value(const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x112ea7d5080c558fULL;
  static const uint64_t static_value2 = 0xe970905c397f106eULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/node_add_force_or_torqueRequest";
  }

  static const char* value(const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"geometry_msgs/Vector3 force\n"
"uint8 relative\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.force);
      stream.next(m.relative);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_add_force_or_torqueRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::node_add_force_or_torqueRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "relative: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relative);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_ADD_FORCE_OR_TORQUEREQUEST_H
