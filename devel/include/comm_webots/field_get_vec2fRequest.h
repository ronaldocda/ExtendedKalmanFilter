// Generated by gencpp from file comm_webots/field_get_vec2fRequest.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_FIELD_GET_VEC2FREQUEST_H
#define COMM_WEBOTS_MESSAGE_FIELD_GET_VEC2FREQUEST_H


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
struct field_get_vec2fRequest_
{
  typedef field_get_vec2fRequest_<ContainerAllocator> Type;

  field_get_vec2fRequest_()
    : field(0)
    , index(0)  {
    }
  field_get_vec2fRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , index(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_vec2fRequest_

typedef ::comm_webots::field_get_vec2fRequest_<std::allocator<void> > field_get_vec2fRequest;

typedef boost::shared_ptr< ::comm_webots::field_get_vec2fRequest > field_get_vec2fRequestPtr;
typedef boost::shared_ptr< ::comm_webots::field_get_vec2fRequest const> field_get_vec2fRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator1> & lhs, const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field &&
    lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator1> & lhs, const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "828947932ebb9e813d3ef918f20f0d81";
  }

  static const char* value(const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x828947932ebb9e81ULL;
  static const uint64_t static_value2 = 0x3d3ef918f20f0d81ULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/field_get_vec2fRequest";
  }

  static const char* value(const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"int32 index\n"
;
  }

  static const char* value(const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_vec2fRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::field_get_vec2fRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::field_get_vec2fRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_FIELD_GET_VEC2FREQUEST_H
