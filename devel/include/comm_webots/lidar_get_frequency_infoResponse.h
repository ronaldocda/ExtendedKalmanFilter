// Generated by gencpp from file comm_webots/lidar_get_frequency_infoResponse.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_LIDAR_GET_FREQUENCY_INFORESPONSE_H
#define COMM_WEBOTS_MESSAGE_LIDAR_GET_FREQUENCY_INFORESPONSE_H


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
struct lidar_get_frequency_infoResponse_
{
  typedef lidar_get_frequency_infoResponse_<ContainerAllocator> Type;

  lidar_get_frequency_infoResponse_()
    : frequency(0.0)
    , minFrequency(0.0)
    , maxFrequency(0.0)  {
    }
  lidar_get_frequency_infoResponse_(const ContainerAllocator& _alloc)
    : frequency(0.0)
    , minFrequency(0.0)
    , maxFrequency(0.0)  {
  (void)_alloc;
    }



   typedef double _frequency_type;
  _frequency_type frequency;

   typedef double _minFrequency_type;
  _minFrequency_type minFrequency;

   typedef double _maxFrequency_type;
  _maxFrequency_type maxFrequency;





  typedef boost::shared_ptr< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> const> ConstPtr;

}; // struct lidar_get_frequency_infoResponse_

typedef ::comm_webots::lidar_get_frequency_infoResponse_<std::allocator<void> > lidar_get_frequency_infoResponse;

typedef boost::shared_ptr< ::comm_webots::lidar_get_frequency_infoResponse > lidar_get_frequency_infoResponsePtr;
typedef boost::shared_ptr< ::comm_webots::lidar_get_frequency_infoResponse const> lidar_get_frequency_infoResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator1> & lhs, const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator2> & rhs)
{
  return lhs.frequency == rhs.frequency &&
    lhs.minFrequency == rhs.minFrequency &&
    lhs.maxFrequency == rhs.maxFrequency;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator1> & lhs, const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace comm_webots

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9814880637e7548b4e9c8076e7471dc3";
  }

  static const char* value(const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9814880637e7548bULL;
  static const uint64_t static_value2 = 0x4e9c8076e7471dc3ULL;
};

template<class ContainerAllocator>
struct DataType< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "comm_webots/lidar_get_frequency_infoResponse";
  }

  static const char* value(const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 frequency\n"
"float64 minFrequency\n"
"float64 maxFrequency\n"
"\n"
;
  }

  static const char* value(const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frequency);
      stream.next(m.minFrequency);
      stream.next(m.maxFrequency);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lidar_get_frequency_infoResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::comm_webots::lidar_get_frequency_infoResponse_<ContainerAllocator>& v)
  {
    s << indent << "frequency: ";
    Printer<double>::stream(s, indent + "  ", v.frequency);
    s << indent << "minFrequency: ";
    Printer<double>::stream(s, indent + "  ", v.minFrequency);
    s << indent << "maxFrequency: ";
    Printer<double>::stream(s, indent + "  ", v.maxFrequency);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_LIDAR_GET_FREQUENCY_INFORESPONSE_H
