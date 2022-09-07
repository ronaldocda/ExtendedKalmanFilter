// Generated by gencpp from file comm_webots/node_get_field_by_indexResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_BY_INDEXRESPONSE_H
#define COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_BY_INDEXRESPONSE_H


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
struct node_get_field_by_indexResponse_
{
  typedef node_get_field_by_indexResponse_<ContainerAllocator> Type;

  node_get_field_by_indexResponse_()
    : field(0)  {
    }
  node_get_field_by_indexResponse_(const ContainerAllocator& _alloc)
    : field(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;





  typedef boost::shared_ptr< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_field_by_indexResponse_

typedef ::comm_webots::node_get_field_by_indexResponse_<std::allocator<void> > node_get_field_by_indexResponse;

typedef boost::shared_ptr< ::comm_webots::node_get_field_by_indexResponse > node_get_field_by_indexResponsePtr;
typedef boost::shared_ptr< ::comm_webots::node_get_field_by_indexResponse const> node_get_field_by_indexResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator1> & lhs, const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e05f2ccbc5e22655a0890e2557862bd";
  }

  static const char* value(const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e05f2ccbc5e2265ULL;
  static const uint64_t static_value2 = 0x5a0890e2557862bdULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/node_get_field_by_indexResponse";
  }

  static const char* value(const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_field_by_indexResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::node_get_field_by_indexResponse_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_BY_INDEXRESPONSE_H
