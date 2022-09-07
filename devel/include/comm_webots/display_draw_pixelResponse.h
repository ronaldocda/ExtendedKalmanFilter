// Generated by gencpp from file comm_webots/display_draw_pixelResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_DISPLAY_DRAW_PIXELRESPONSE_H
#define COMM_WEBOTS_MESSAGE_DISPLAY_DRAW_PIXELRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace comm_webots
{
template <class ContainerAllocator>
struct display_draw_pixelResponse_
{
  typedef display_draw_pixelResponse_<ContainerAllocator> Type;

  display_draw_pixelResponse_()
    : success(0)  {
    }
  display_draw_pixelResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> const> ConstPtr;

}; // struct display_draw_pixelResponse_

typedef ::comm_webots::display_draw_pixelResponse_<std::allocator<void> > display_draw_pixelResponse;

typedef boost::shared_ptr< ::comm_webots::display_draw_pixelResponse > display_draw_pixelResponsePtr;
typedef boost::shared_ptr< ::comm_webots::display_draw_pixelResponse const> display_draw_pixelResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator1> & lhs, const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator1> & lhs, const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/display_draw_pixelResponse";
  }

  static const char* value(const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct display_draw_pixelResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::display_draw_pixelResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::display_draw_pixelResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_DISPLAY_DRAW_PIXELRESPONSE_H
