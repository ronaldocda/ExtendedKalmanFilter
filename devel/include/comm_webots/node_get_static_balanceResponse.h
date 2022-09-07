// Generated by gencpp from file comm_webots/node_get_static_balanceResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_GET_STATIC_BALANCERESPONSE_H
#define COMM_WEBOTS_MESSAGE_NODE_GET_STATIC_BALANCERESPONSE_H


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
struct node_get_static_balanceResponse_
{
  typedef node_get_static_balanceResponse_<ContainerAllocator> Type;

  node_get_static_balanceResponse_()
    : balance(0)  {
    }
  node_get_static_balanceResponse_(const ContainerAllocator& _alloc)
    : balance(0)  {
  (void)_alloc;
    }



   typedef uint8_t _balance_type;
  _balance_type balance;





  typedef boost::shared_ptr< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_static_balanceResponse_

typedef ::comm_webots::node_get_static_balanceResponse_<std::allocator<void> > node_get_static_balanceResponse;

typedef boost::shared_ptr< ::comm_webots::node_get_static_balanceResponse > node_get_static_balanceResponsePtr;
typedef boost::shared_ptr< ::comm_webots::node_get_static_balanceResponse const> node_get_static_balanceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.balance == rhs.balance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f560e1499c2583506afd83461a0e3fd6";
  }

  static const char* value(const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf560e1499c258350ULL;
  static const uint64_t static_value2 = 0x6afd83461a0e3fd6ULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/node_get_static_balanceResponse";
  }

  static const char* value(const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 balance\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.balance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_static_balanceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::node_get_static_balanceResponse_<ContainerAllocator>& v)
  {
    s << indent << "balance: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.balance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_GET_STATIC_BALANCERESPONSE_H
