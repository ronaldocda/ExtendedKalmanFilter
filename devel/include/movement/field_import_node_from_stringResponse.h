// Generated by gencpp from file movement/field_import_node_from_stringResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGRESPONSE_H
#define MOVEMENT_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGRESPONSE_H


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
struct field_import_node_from_stringResponse_
{
  typedef field_import_node_from_stringResponse_<ContainerAllocator> Type;

  field_import_node_from_stringResponse_()
    : success(0)  {
    }
  field_import_node_from_stringResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
  (void)_alloc;
    }



   typedef int32_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct field_import_node_from_stringResponse_

typedef ::movement::field_import_node_from_stringResponse_<std::allocator<void> > field_import_node_from_stringResponse;

typedef boost::shared_ptr< ::movement::field_import_node_from_stringResponse > field_import_node_from_stringResponsePtr;
typedef boost::shared_ptr< ::movement::field_import_node_from_stringResponse const> field_import_node_from_stringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::field_import_node_from_stringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::field_import_node_from_stringResponse_<ContainerAllocator1> & lhs, const ::movement::field_import_node_from_stringResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::field_import_node_from_stringResponse_<ContainerAllocator1> & lhs, const ::movement::field_import_node_from_stringResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c2bcf2ff0894cb3058b1bf4c8c4175a";
  }

  static const char* value(const ::movement::field_import_node_from_stringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c2bcf2ff0894cb3ULL;
  static const uint64_t static_value2 = 0x058b1bf4c8c4175aULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/field_import_node_from_stringResponse";
  }

  static const char* value(const ::movement::field_import_node_from_stringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 success\n"
"\n"
;
  }

  static const char* value(const ::movement::field_import_node_from_stringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct field_import_node_from_stringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::field_import_node_from_stringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::field_import_node_from_stringResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<int32_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_FIELD_IMPORT_NODE_FROM_STRINGRESPONSE_H
