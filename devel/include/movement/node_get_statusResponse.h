// Generated by gencpp from file movement/node_get_statusResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_NODE_GET_STATUSRESPONSE_H
#define MOVEMENT_MESSAGE_NODE_GET_STATUSRESPONSE_H


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
struct node_get_statusResponse_
{
  typedef node_get_statusResponse_<ContainerAllocator> Type;

  node_get_statusResponse_()
    : status(0)  {
    }
  node_get_statusResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::movement::node_get_statusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::node_get_statusResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_statusResponse_

typedef ::movement::node_get_statusResponse_<std::allocator<void> > node_get_statusResponse;

typedef boost::shared_ptr< ::movement::node_get_statusResponse > node_get_statusResponsePtr;
typedef boost::shared_ptr< ::movement::node_get_statusResponse const> node_get_statusResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::node_get_statusResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::node_get_statusResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::node_get_statusResponse_<ContainerAllocator1> & lhs, const ::movement::node_get_statusResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::node_get_statusResponse_<ContainerAllocator1> & lhs, const ::movement::node_get_statusResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::node_get_statusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::node_get_statusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_get_statusResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_get_statusResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_get_statusResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_get_statusResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::node_get_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "284aa12dd9e9e760802ac9f38036ea5e";
  }

  static const char* value(const ::movement::node_get_statusResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x284aa12dd9e9e760ULL;
  static const uint64_t static_value2 = 0x802ac9f38036ea5eULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::node_get_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/node_get_statusResponse";
  }

  static const char* value(const ::movement::node_get_statusResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::node_get_statusResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"\n"
;
  }

  static const char* value(const ::movement::node_get_statusResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::node_get_statusResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_statusResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::node_get_statusResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::node_get_statusResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_NODE_GET_STATUSRESPONSE_H
