// Generated by gencpp from file movement/field_get_stringRequest.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_FIELD_GET_STRINGREQUEST_H
#define MOVEMENT_MESSAGE_FIELD_GET_STRINGREQUEST_H


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
struct field_get_stringRequest_
{
  typedef field_get_stringRequest_<ContainerAllocator> Type;

  field_get_stringRequest_()
    : field(0)
    , index(0)  {
    }
  field_get_stringRequest_(const ContainerAllocator& _alloc)
    : field(0)
    , index(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;

   typedef int32_t _index_type;
  _index_type index;





  typedef boost::shared_ptr< ::movement::field_get_stringRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::field_get_stringRequest_<ContainerAllocator> const> ConstPtr;

}; // struct field_get_stringRequest_

typedef ::movement::field_get_stringRequest_<std::allocator<void> > field_get_stringRequest;

typedef boost::shared_ptr< ::movement::field_get_stringRequest > field_get_stringRequestPtr;
typedef boost::shared_ptr< ::movement::field_get_stringRequest const> field_get_stringRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::field_get_stringRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::field_get_stringRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::field_get_stringRequest_<ContainerAllocator1> & lhs, const ::movement::field_get_stringRequest_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field &&
    lhs.index == rhs.index;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::field_get_stringRequest_<ContainerAllocator1> & lhs, const ::movement::field_get_stringRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::field_get_stringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::field_get_stringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_get_stringRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_get_stringRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_get_stringRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_get_stringRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::field_get_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "828947932ebb9e813d3ef918f20f0d81";
  }

  static const char* value(const ::movement::field_get_stringRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x828947932ebb9e81ULL;
  static const uint64_t static_value2 = 0x3d3ef918f20f0d81ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::field_get_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/field_get_stringRequest";
  }

  static const char* value(const ::movement::field_get_stringRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::field_get_stringRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"int32 index\n"
;
  }

  static const char* value(const ::movement::field_get_stringRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::field_get_stringRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
      stream.next(m.index);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_get_stringRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::field_get_stringRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::field_get_stringRequest_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
    s << indent << "index: ";
    Printer<int32_t>::stream(s, indent + "  ", v.index);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_FIELD_GET_STRINGREQUEST_H
