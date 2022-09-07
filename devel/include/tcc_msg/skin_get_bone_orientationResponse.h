// Generated by gencpp from file tcc_msg/skin_get_bone_orientationResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SKIN_GET_BONE_ORIENTATIONRESPONSE_H
#define TCC_MSG_MESSAGE_SKIN_GET_BONE_ORIENTATIONRESPONSE_H


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
struct skin_get_bone_orientationResponse_
{
  typedef skin_get_bone_orientationResponse_<ContainerAllocator> Type;

  skin_get_bone_orientationResponse_()
    : orientation()  {
    }
  skin_get_bone_orientationResponse_(const ContainerAllocator& _alloc)
    : orientation(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;





  typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct skin_get_bone_orientationResponse_

typedef ::tcc_msg::skin_get_bone_orientationResponse_<std::allocator<void> > skin_get_bone_orientationResponse;

typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_orientationResponse > skin_get_bone_orientationResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_orientationResponse const> skin_get_bone_orientationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.orientation == rhs.orientation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ed1de3b69473461225107f55ad59b9d";
  }

  static const char* value(const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ed1de3b69473461ULL;
  static const uint64_t static_value2 = 0x225107f55ad59b9dULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/skin_get_bone_orientationResponse";
  }

  static const char* value(const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Quaternion orientation\n"
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

  static const char* value(const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_get_bone_orientationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::skin_get_bone_orientationResponse_<ContainerAllocator>& v)
  {
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_SKIN_GET_BONE_ORIENTATIONRESPONSE_H
