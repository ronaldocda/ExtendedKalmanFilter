// Generated by gencpp from file movement/field_get_countResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_FIELD_GET_COUNTRESPONSE_H
#define MOVEMENT_MESSAGE_FIELD_GET_COUNTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace movement
{
template <class ContainerAllocator>
struct field_get_countResponse_
{
  typedef field_get_countResponse_<ContainerAllocator> Type;

  field_get_countResponse_()
    : count(0)  {
    }
  field_get_countResponse_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef int32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::movement::field_get_countResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::field_get_countResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_countResponse_

typedef ::movement::field_get_countResponse_<std::allocator<void> > field_get_countResponse;

typedef boost::shared_ptr< ::movement::field_get_countResponse > field_get_countResponsePtr;
typedef boost::shared_ptr< ::movement::field_get_countResponse const> field_get_countResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::field_get_countResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::field_get_countResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::field_get_countResponse_<ContainerAllocator1> & lhs, const ::movement::field_get_countResponse_<ContainerAllocator2> & rhs)
{
  return lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::field_get_countResponse_<ContainerAllocator1> & lhs, const ::movement::field_get_countResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::field_get_countResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::field_get_countResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_get_countResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_get_countResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_get_countResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_get_countResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::field_get_countResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "602d642babe509c7c59f497c23e716a9";
  }

  static const char* value(const ::movement::field_get_countResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x602d642babe509c7ULL;
  static const uint64_t static_value2 = 0xc59f497c23e716a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::field_get_countResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/field_get_countResponse";
  }

  static const char* value(const ::movement::field_get_countResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::field_get_countResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 count\n"
"\n"
;
  }

  static const char* value(const ::movement::field_get_countResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::field_get_countResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_countResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::field_get_countResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::field_get_countResponse_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<int32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_FIELD_GET_COUNTRESPONSE_H
