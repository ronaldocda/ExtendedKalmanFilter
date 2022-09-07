// Generated by gencpp from file tcc_msg/get_boolResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_GET_BOOLRESPONSE_H
#define TCC_MSG_MESSAGE_GET_BOOLRESPONSE_H


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
struct get_boolResponse_
{
  typedef get_boolResponse_<ContainerAllocator> Type;

  get_boolResponse_()
    : value(false)  {
    }
  get_boolResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::tcc_msg::get_boolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::get_boolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct get_boolResponse_

typedef ::tcc_msg::get_boolResponse_<std::allocator<void> > get_boolResponse;

typedef boost::shared_ptr< ::tcc_msg::get_boolResponse > get_boolResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::get_boolResponse const> get_boolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::get_boolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::get_boolResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::get_boolResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::get_boolResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::get_boolResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::get_boolResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::get_boolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::get_boolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::get_boolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::tcc_msg::get_boolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/get_boolResponse";
  }

  static const char* value(const ::tcc_msg::get_boolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
"\n"
;
  }

  static const char* value(const ::tcc_msg::get_boolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_boolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::get_boolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::get_boolResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_GET_BOOLRESPONSE_H
