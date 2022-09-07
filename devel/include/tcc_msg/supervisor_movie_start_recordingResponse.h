// Generated by gencpp from file tcc_msg/supervisor_movie_start_recordingResponse.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGRESPONSE_H
#define TCC_MSG_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGRESPONSE_H


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
struct supervisor_movie_start_recordingResponse_
{
  typedef supervisor_movie_start_recordingResponse_<ContainerAllocator> Type;

  supervisor_movie_start_recordingResponse_()
    : success(0)  {
    }
  supervisor_movie_start_recordingResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct supervisor_movie_start_recordingResponse_

typedef ::tcc_msg::supervisor_movie_start_recordingResponse_<std::allocator<void> > supervisor_movie_start_recordingResponse;

typedef boost::shared_ptr< ::tcc_msg::supervisor_movie_start_recordingResponse > supervisor_movie_start_recordingResponsePtr;
typedef boost::shared_ptr< ::tcc_msg::supervisor_movie_start_recordingResponse const> supervisor_movie_start_recordingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator1> & lhs, const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace tcc_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b13460cb14006d3852674b4c614f25f";
  }

  static const char* value(const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b13460cb14006d3ULL;
  static const uint64_t static_value2 = 0x852674b4c614f25fULL;
};

template<class ContainerAllocator>
struct DataType< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tcc_msg/supervisor_movie_start_recordingResponse";
  }

  static const char* value(const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n"
"\n"
;
  }

  static const char* value(const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct supervisor_movie_start_recordingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tcc_msg::supervisor_movie_start_recordingResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TCC_MSG_MESSAGE_SUPERVISOR_MOVIE_START_RECORDINGRESPONSE_H
