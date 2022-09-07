// Generated by gencpp from file tcc_msg/get_uint64Request.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_GET_UINT64REQUEST_H
#define TCC_MSG_MESSAGE_GET_UINT64REQUEST_H


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
struct get_uint64Request_
{
  typedef get_uint64Request_<ContainerAllocator> Type;

  get_uint64Request_()
    : ask(false)  {
    }
  get_uint64Request_(const ContainerAllocator& _alloc)
    : ask(false)  {
  (void)_alloc;
    }



   typedef uint8_t _ask_type;
  _ask_type ask;





  typedef boost::shared_ptr< ::tcc_msg::get_uint64Request_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::get_uint64Request_<ContainerAllocator> const> ConstPtr;

}; // struct get_uint64Request_

typedef ::tcc_msg::get_uint64Request_<std::allocator<void> > get_uint64Request;

typedef boost::shared_ptr< ::tcc_msg::get_uint64Request > get_uint64RequestPtr;
typedef boost::shared_ptr< ::tcc_msg::get_uint64Request const> get_uint64RequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::get_uint64Request_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::get_uint64Request_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::get_uint64Request_<ContainerAllocator1> & lhs, const ::tcc_msg::get_uint64Request_<ContainerAllocator2> & rhs)
{
  return lhs.ask == rhs.ask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::get_uint64Request_<ContainerAllocator1> & lhs, const ::tcc_msg::get_uint64Request_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::get_uint64Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::get_uint64Request_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::get_uint64Request_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbe9700edfca44c5eefb040d9b60f6d6";
  }

  static const char* value(const ::tcc_msg::get_uint64Request_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbe9700edfca44c5ULL;
  static const uint64_t static_value2 = 0xeefb040d9b60f6d6ULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/get_uint64Request";
  }

  static const char* value(const ::tcc_msg::get_uint64Request_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool ask\n"
;
  }

  static const char* value(const ::tcc_msg::get_uint64Request_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct get_uint64Request_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::get_uint64Request_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::get_uint64Request_<ContainerAllocator>& v)
  {
    s << indent << "ask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_GET_UINT64REQUEST_H
