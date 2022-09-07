// Generated by gencpp from file tcc_msg/field_get_rotationResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_FIELD_GET_ROTATIONRESPONSE_H
#define TCC_MSG_MESSAGE_FIELD_GET_ROTATIONRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Quaternion.h>

namespace tcc_msg
{
template <class ContainerAllocator>
struct field_get_rotationResponse_
{
  typedef field_get_rotationResponse_<ContainerAllocator> Type;

  field_get_rotationResponse_()
    : value()  {
    }
  field_get_rotationResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_rotationResponse_

typedef ::tcc_msg::field_get_rotationResponse_<std::allocator<void> > field_get_rotationResponse;

typedef boost::shared_ptr< ::tcc_msg::field_get_rotationResponse > field_get_rotationResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::field_get_rotationResponse const> field_get_rotationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eb57f1ee3cba115a75a1a64a523bbed1";
  }

  static const char* value(const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeb57f1ee3cba115aULL;
  static const uint64_t static_value2 = 0x75a1a64a523bbed1ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/field_get_rotationResponse";
  }

  static const char* value(const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Quaternion value\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_rotationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::field_get_rotationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::field_get_rotationResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_FIELD_GET_ROTATIONRESPONSE_H
