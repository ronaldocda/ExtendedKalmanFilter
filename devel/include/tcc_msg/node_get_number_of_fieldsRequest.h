// Generated by gencpp from file tcc_msg/node_get_number_of_fieldsRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_GET_NUMBER_OF_FIELDSREQUEST_H
#define TCC_MSG_MESSAGE_NODE_GET_NUMBER_OF_FIELDSREQUEST_H


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
struct node_get_number_of_fieldsRequest_
{
  typedef node_get_number_of_fieldsRequest_<ContainerAllocator> Type;

  node_get_number_of_fieldsRequest_()
    : node(0)
    , proto(false)  {
    }
  node_get_number_of_fieldsRequest_(const ContainerAllocator& _alloc)
    : node(0)
    , proto(false)  {
  (void)_alloc;
    }



   typedef uint64_t _node_type;
  _node_type node;

   typedef uint8_t _proto_type;
  _proto_type proto;





  typedef boost::shared_ptr< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_number_of_fieldsRequest_

typedef ::tcc_msg::node_get_number_of_fieldsRequest_<std::allocator<void> > node_get_number_of_fieldsRequest;

typedef boost::shared_ptr< ::tcc_msg::node_get_number_of_fieldsRequest > node_get_number_of_fieldsRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::node_get_number_of_fieldsRequest const> node_get_number_of_fieldsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node == rhs.node &&
    lhs.proto == rhs.proto;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c0118192008356d8ad845d5f20024814";
  }

  static const char* value(const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc0118192008356d8ULL;
  static const uint64_t static_value2 = 0xad845d5f20024814ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/node_get_number_of_fieldsRequest";
  }

  static const char* value(const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 node\n"
"bool proto\n"
;
  }

  static const char* value(const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node);
      stream.next(m.proto);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_number_of_fieldsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::node_get_number_of_fieldsRequest_<ContainerAllocator>& v)
  {
    s << indent << "node: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.node);
    s << indent << "proto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.proto);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_GET_NUMBER_OF_FIELDSREQUEST_H
