// Generated by gencpp from file tcc_msg/field_get_vec3fResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_FIELD_GET_VEC3FRESPONSE_H
#define TCC_MSG_MESSAGE_FIELD_GET_VEC3FRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace tcc_msg
{
template <class ContainerAllocator>
struct field_get_vec3fResponse_
{
  typedef field_get_vec3fResponse_<ContainerAllocator> Type;

  field_get_vec3fResponse_()
    : value()  {
    }
  field_get_vec3fResponse_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_vec3fResponse_

typedef ::tcc_msg::field_get_vec3fResponse_<std::allocator<void> > field_get_vec3fResponse;

typedef boost::shared_ptr< ::tcc_msg::field_get_vec3fResponse > field_get_vec3fResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::field_get_vec3fResponse const> field_get_vec3fResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2c51c1a0258b375bed188057dceaac2";
  }

  static const char* value(const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2c51c1a0258b375ULL;
  static const uint64_t static_value2 = 0xbed188057dceaac2ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/field_get_vec3fResponse";
  }

  static const char* value(const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Vector3 value\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_vec3fResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::field_get_vec3fResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_FIELD_GET_VEC3FRESPONSE_H
