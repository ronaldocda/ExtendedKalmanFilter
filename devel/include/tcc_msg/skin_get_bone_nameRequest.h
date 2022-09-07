// Generated by gencpp from file tcc_msg/skin_get_bone_nameRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SKIN_GET_BONE_NAMEREQUEST_H
#define TCC_MSG_MESSAGE_SKIN_GET_BONE_NAMEREQUEST_H


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
struct skin_get_bone_nameRequest_
{
  typedef skin_get_bone_nameRequest_<ContainerAllocator> Type;

  skin_get_bone_nameRequest_()
    : index(0)  {
    }
  skin_get_bone_nameRequest_(const ContainerAllocator& _alloc)
    : index(0)  {
  (void)_alloc;
    }



   typedef int32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> const> ConstPtr;

}; // struct skin_get_bone_nameRequest_

typedef ::tcc_msg::skin_get_bone_nameRequest_<std::allocator<void> > skin_get_bone_nameRequest;

typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_nameRequest > skin_get_bone_nameRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::skin_get_bone_nameRequest const> skin_get_bone_nameRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator2> & rhs)
{
  return lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "483eea06cdc3e559421ee31116d0f3b9";
  }

  static const char* value(const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x483eea06cdc3e559ULL;
  static const uint64_t static_value2 = 0x421ee31116d0f3b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/skin_get_bone_nameRequest";
  }

  static const char* value(const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 index\n"
;
  }

  static const char* value(const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct skin_get_bone_nameRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::skin_get_bone_nameRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_SKIN_GET_BONE_NAMEREQUEST_H
