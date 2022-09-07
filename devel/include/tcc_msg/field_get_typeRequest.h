// Generated by gencpp from file tcc_msg/field_get_typeRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_FIELD_GET_TYPEREQUEST_H
#define TCC_MSG_MESSAGE_FIELD_GET_TYPEREQUEST_H


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
struct field_get_typeRequest_
{
  typedef field_get_typeRequest_<ContainerAllocator> Type;

  field_get_typeRequest_()
    : field(0)  {
    }
  field_get_typeRequest_(const ContainerAllocator& _alloc)
    : field(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;





  typedef boost::shared_ptr< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_typeRequest_

typedef ::tcc_msg::field_get_typeRequest_<std::allocator<void> > field_get_typeRequest;

typedef boost::shared_ptr< ::tcc_msg::field_get_typeRequest > field_get_typeRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::field_get_typeRequest const> field_get_typeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::field_get_typeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::field_get_typeRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_typeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::field_get_typeRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_typeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e05f2ccbc5e22655a0890e2557862bd";
  }

  static const char* value(const ::tcc_msg::field_get_typeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e05f2ccbc5e2265ULL;
  static const uint64_t static_value2 = 0x5a0890e2557862bdULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/field_get_typeRequest";
  }

  static const char* value(const ::tcc_msg::field_get_typeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
;
  }

  static const char* value(const ::tcc_msg::field_get_typeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_typeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::field_get_typeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::field_get_typeRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_FIELD_GET_TYPEREQUEST_H
