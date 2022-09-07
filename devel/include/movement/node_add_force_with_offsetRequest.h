// Generated by gencpp from file movement/node_add_force_with_offsetRequest.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETREQUEST_H
#define MOVEMENT_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace movement
{
template <class ContainerAllocator>
struct node_add_force_with_offsetRequest_
{
  typedef node_add_force_with_offsetRequest_<ContainerAllocator> Type;

  node_add_force_with_offsetRequest_()
    : node(0)
    , force()
    , offset()
    , relative(0)  {
    }
  node_add_force_with_offsetRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , force(_alloc)
    , offset(_alloc)
    , relative(0)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _force_type;
  _force_type force;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _offset_type;
  _offset_type offset;

   typedef uint8_t _relative_type;
  _relative_type relative;





  typedef boost::shared_ptr< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_add_force_with_offsetRequest_

typedef ::movement::node_add_force_with_offsetRequest_<std::allocator<void> > node_add_force_with_offsetRequest;

typedef boost::shared_ptr< ::movement::node_add_force_with_offsetRequest > node_add_force_with_offsetRequestPtr;
typedef boost::shared_ptr< ::movement::node_add_force_with_offsetRequest const> node_add_force_with_offsetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator1> & lhs, const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.force == rhs.force &&
    lhs.offset == rhs.offset &&
    lhs.relative == rhs.relative;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator1> & lhs, const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a76c212a713374a1593523ad66a858c4";
  }

  static const char* value(const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa76c212a713374a1ULL;
  static const uint64_t static_value2 = 0x593523ad66a858c4ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/node_add_force_with_offsetRequest";
  }

  static const char* value(const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"geometry_msgs/Vector3 force\n"
"geometry_msgs/Vector3 offset\n"
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

  static const char* value(const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.force);
      stream.next(m.offset);
      stream.next(m.relative);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_add_force_with_offsetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::node_add_force_with_offsetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::node_add_force_with_offsetRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "force: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.force);
    s << indent << "offset: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.offset);
    s << indent << "relative: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.relative);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETREQUEST_H
