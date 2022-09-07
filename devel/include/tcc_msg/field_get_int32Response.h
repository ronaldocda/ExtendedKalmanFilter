// Generated by gencpp from file tcc_msg/field_get_int32Response.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_FIELD_GET_INT32RESPONSE_H
#define TCC_MSG_MESSAGE_FIELD_GET_INT32RESPONSE_H


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
struct field_get_int32Response_
{
  typedef field_get_int32Response_<ContainerAllocator> Type;

  field_get_int32Response_()
    : value(0)  {
    }
  field_get_int32Response_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef int32_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::tcc_msg::field_get_int32Response_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::field_get_int32Response_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_int32Response_

typedef ::tcc_msg::field_get_int32Response_<std::allocator<void> > field_get_int32Response;

typedef boost::shared_ptr< ::tcc_msg::field_get_int32Response > field_get_int32ResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::field_get_int32Response const> field_get_int32ResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::field_get_int32Response_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::field_get_int32Response_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_int32Response_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::field_get_int32Response_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_int32Response_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_int32Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_int32Response_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_int32Response_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3087778e93fcd34cc8d65bc54e850d1";
  }

  static const char* value(const ::tcc_msg::field_get_int32Response_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3087778e93fcd34ULL;
  static const uint64_t static_value2 = 0xcc8d65bc54e850d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/field_get_int32Response";
  }

  static const char* value(const ::tcc_msg::field_get_int32Response_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 value\n"
"\n"
;
  }

  static const char* value(const ::tcc_msg::field_get_int32Response_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_int32Response_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::field_get_int32Response_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::field_get_int32Response_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_FIELD_GET_INT32RESPONSE_H
