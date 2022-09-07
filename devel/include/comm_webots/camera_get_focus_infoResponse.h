// Generated by gencpp from file comm_webots/camera_get_focus_infoResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_CAMERA_GET_FOCUS_INFORESPONSE_H
#define COMM_WEBOTS_MESSAGE_CAMERA_GET_FOCUS_INFORESPONSE_H


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
struct camera_get_focus_infoResponse_
{
  typedef camera_get_focus_infoResponse_<ContainerAllocator> Type;

  camera_get_focus_infoResponse_()
    : focalLength(0.0)
    , focalDistance(0.0)
    , maxFocalDistance(0.0)
    , minFocalDistance(0.0)  {
    }
  camera_get_focus_infoResponse_(const ContainerAllocator& _alloc)
    : focalLength(0.0)
    , focalDistance(0.0)
    , maxFocalDistance(0.0)
    , minFocalDistance(0.0)  {
  (void)_alloc;
    }



   typedef double _focalLength_type;
  _focalLength_type focalLength;

   typedef double _focalDistance_type;
  _focalDistance_type focalDistance;

   typedef double _maxFocalDistance_type;
  _maxFocalDistance_type maxFocalDistance;

   typedef double _minFocalDistance_type;
  _minFocalDistance_type minFocalDistance;





  typedef boost::shared_ptr< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct camera_get_focus_infoResponse_

typedef ::comm_webots::camera_get_focus_infoResponse_<std::allocator<void> > camera_get_focus_infoResponse;

typedef boost::shared_ptr< ::comm_webots::camera_get_focus_infoResponse > camera_get_focus_infoResponsePtr;
typedef boost::shared_ptr< ::comm_webots::camera_get_focus_infoResponse const> camera_get_focus_infoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator1> & lhs, const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.focalLength == rhs.focalLength &&
    lhs.focalDistance == rhs.focalDistance &&
    lhs.maxFocalDistance == rhs.maxFocalDistance &&
    lhs.minFocalDistance == rhs.minFocalDistance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator1> & lhs, const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8cabd8a61992c5b3e4e9d182bb2380ac";
  }

  static const char* value(const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8cabd8a61992c5b3ULL;
  static const uint64_t static_value2 = 0xe4e9d182bb2380acULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/camera_get_focus_infoResponse";
  }

  static const char* value(const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 focalLength\n"
"float64 focalDistance\n"
"float64 maxFocalDistance\n"
"float64 minFocalDistance\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.focalLength);
      stream.next(m.focalDistance);
      stream.next(m.maxFocalDistance);
      stream.next(m.minFocalDistance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct camera_get_focus_infoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::camera_get_focus_infoResponse_<ContainerAllocator>& v)
  {
    s << indent << "focalLength: ";
    Printer<double>::stream(s, indent + "  ", v.focalLength);
    s << indent << "focalDistance: ";
    Printer<double>::stream(s, indent + "  ", v.focalDistance);
    s << indent << "maxFocalDistance: ";
    Printer<double>::stream(s, indent + "  ", v.maxFocalDistance);
    s << indent << "minFocalDistance: ";
    Printer<double>::stream(s, indent + "  ", v.minFocalDistance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_CAMERA_GET_FOCUS_INFORESPONSE_H
