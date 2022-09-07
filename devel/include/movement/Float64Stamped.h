// Generated by gencpp from file movement/Float64Stamped.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_FLOAT64STAMPED_H
#define MOVEMENT_MESSAGE_FLOAT64STAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace movement
{
template <class ContainerAllocator>
struct Float64Stamped_
{
  typedef Float64Stamped_<ContainerAllocator> Type;

  Float64Stamped_()
    : header()
    , data(0.0)  {
    }
  Float64Stamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::movement::Float64Stamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::Float64Stamped_<ContainerAllocator> const> ConstPtr;

}; // struct Float64Stamped_

typedef ::movement::Float64Stamped_<std::allocator<void> > Float64Stamped;

typedef boost::shared_ptr< ::movement::Float64Stamped > Float64StampedPtr;
typedef boost::shared_ptr< ::movement::Float64Stamped const> Float64StampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::Float64Stamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::Float64Stamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::Float64Stamped_<ContainerAllocator1> & lhs, const ::movement::Float64Stamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::Float64Stamped_<ContainerAllocator1> & lhs, const ::movement::Float64Stamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::Float64Stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::Float64Stamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::Float64Stamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::Float64Stamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::Float64Stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::Float64Stamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::Float64Stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e6c99c37e6f9fe98e071d524cc164e65";
  }

  static const char* value(const ::movement::Float64Stamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe6c99c37e6f9fe98ULL;
  static const uint64_t static_value2 = 0xe071d524cc164e65ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::Float64Stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/Float64Stamped";
  }

  static const char* value(const ::movement::Float64Stamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::Float64Stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float64 data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::movement::Float64Stamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::Float64Stamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Float64Stamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::Float64Stamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::Float64Stamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    Printer<double>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_FLOAT64STAMPED_H
