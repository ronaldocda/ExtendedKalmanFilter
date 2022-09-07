// Generated by gencpp from file tcc_msg/supervisor_virtual_reality_headset_get_orientationRequest.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONREQUEST_H
#define TCC_MSG_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONREQUEST_H


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
struct supervisor_virtual_reality_headset_get_orientationRequest_
{
  typedef supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> Type;

  supervisor_virtual_reality_headset_get_orientationRequest_()
    : ask(0)  {
    }
  supervisor_virtual_reality_headset_get_orientationRequest_(const ContainerAllocator& _alloc)
    : ask(0)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_virtual_reality_headset_get_orientationRequest_

typedef ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<std::allocator<void> > supervisor_virtual_reality_headset_get_orientationRequest;

typedef boost::shared_ptr< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest > supervisor_virtual_reality_headset_get_orientationRequestPtr;
typedef boost::shared_ptr< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest const> supervisor_virtual_reality_headset_get_orientationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f9df5232b65af94f73f79fe6d84301bb";
  }

  static const char* value(const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/supervisor_virtual_reality_headset_get_orientationRequest";
  }

  static const char* value(const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 ask\n"
;
  }

  static const char* value(const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_virtual_reality_headset_get_orientationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::supervisor_virtual_reality_headset_get_orientationRequest_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_SUPERVISOR_VIRTUAL_REALITY_HEADSET_GET_ORIENTATIONREQUEST_H
