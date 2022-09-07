// Generated by gencpp from file tcc_msg/display_set_fontResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_DISPLAY_SET_FONTRESPONSE_H
#define TCC_MSG_MESSAGE_DISPLAY_SET_FONTRESPONSE_H


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
struct display_set_fontResponse_
{
  typedef display_set_fontResponse_<ContainerAllocator> Type;

  display_set_fontResponse_()
    : success(0)  {
    }
  display_set_fontResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> const> ConstPtr;

}; // struct display_set_fontResponse_

typedef ::tcc_msg::display_set_fontResponse_<std::allocator<void> > display_set_fontResponse;

typedef boost::shared_ptr< ::tcc_msg::display_set_fontResponse > display_set_fontResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::display_set_fontResponse const> display_set_fontResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::display_set_fontResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::display_set_fontResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::display_set_fontResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::display_set_fontResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::display_set_fontResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::tcc_msg::display_set_fontResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/display_set_fontResponse";
  }

  static const char* value(const ::tcc_msg::display_set_fontResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n"
"\n"
;
  }

  static const char* value(const ::tcc_msg::display_set_fontResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_set_fontResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::display_set_fontResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::display_set_fontResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_DISPLAY_SET_FONTRESPONSE_H
