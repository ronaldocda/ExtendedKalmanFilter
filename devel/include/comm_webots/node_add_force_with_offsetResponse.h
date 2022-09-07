// Generated by gencpp from file comm_webots/node_add_force_with_offsetResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETRESPONSE_H
#define COMM_WEBOTS_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETRESPONSE_H


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
struct node_add_force_with_offsetResponse_
{
  typedef node_add_force_with_offsetResponse_<ContainerAllocator> Type;

  node_add_force_with_offsetResponse_()
    : success(0)  {
    }
  node_add_force_with_offsetResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int32_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_add_force_with_offsetResponse_

typedef ::comm_webots::node_add_force_with_offsetResponse_<std::allocator<void> > node_add_force_with_offsetResponse;

typedef boost::shared_ptr< ::comm_webots::node_add_force_with_offsetResponse > node_add_force_with_offsetResponsePtr;
typedef boost::shared_ptr< ::comm_webots::node_add_force_with_offsetResponse const> node_add_force_with_offsetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2bcf2ff0894cb3058b1bf4c8c4175a";
  }

  static const char* value(const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2bcf2ff0894cb3ULL;
  static const uint64_t static_value2 = 0x058b1bf4c8c4175aULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/node_add_force_with_offsetResponse";
  }

  static const char* value(const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 success\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_add_force_with_offsetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::node_add_force_with_offsetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int32_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_ADD_FORCE_WITH_OFFSETRESPONSE_H
