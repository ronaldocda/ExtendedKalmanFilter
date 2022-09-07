// Generated by gencpp from file tcc_msg/node_enable_contact_points_trackingRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_ENABLE_CONTACT_POINTS_TRACKINGREQUEST_H
#define TCC_MSG_MESSAGE_NODE_ENABLE_CONTACT_POINTS_TRACKINGREQUEST_H


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
struct node_enable_contact_points_trackingRequest_
{
  typedef node_enable_contact_points_trackingRequest_<ContainerAllocator> Type;

  node_enable_contact_points_trackingRequest_()
    : node(0)
    , sampling_period(0)
    , include_descendants(false)  {
    }
  node_enable_contact_points_trackingRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , sampling_period(0)
    , include_descendants(false)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef int32_t _sampling_period_type;
  _sampling_period_type sampling_period;

   typedef uint8_t _include_descendants_type;
  _include_descendants_type include_descendants;





  typedef boost::shared_ptr< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_enable_contact_points_trackingRequest_

typedef ::tcc_msg::node_enable_contact_points_trackingRequest_<std::allocator<void> > node_enable_contact_points_trackingRequest;

typedef boost::shared_ptr< ::tcc_msg::node_enable_contact_points_trackingRequest > node_enable_contact_points_trackingRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::node_enable_contact_points_trackingRequest const> node_enable_contact_points_trackingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.sampling_period == rhs.sampling_period &&
    lhs.include_descendants == rhs.include_descendants;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b326df591dcf4cc41328b2092541b14";
  }

  static const char* value(const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b326df591dcf4ccULL;
  static const uint64_t static_value2 = 0x41328b2092541b14ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/node_enable_contact_points_trackingRequest";
  }

  static const char* value(const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"int32 sampling_period\n"
"bool include_descendants\n"
;
  }

  static const char* value(const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.sampling_period);
      stream.next(m.include_descendants);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_enable_contact_points_trackingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::node_enable_contact_points_trackingRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "sampling_period: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sampling_period);
    s << indent << "include_descendants: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.include_descendants);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_ENABLE_CONTACT_POINTS_TRACKINGREQUEST_H
