// Generated by gencpp from file movement/node_get_fieldResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_NODE_GET_FIELDRESPONSE_H
#define MOVEMENT_MESSAGE_NODE_GET_FIELDRESPONSE_H


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
struct node_get_fieldResponse_
{
  typedef node_get_fieldResponse_<ContainerAllocator> Type;

  node_get_fieldResponse_()
    : field(0)  {
    }
  node_get_fieldResponse_(const ContainerAllocator& _alloc)
    : field(0)  {
  (void)_alloc;
    }



   typedef uint64_t _field_type;
  _field_type field;





  typedef boost::shared_ptr< ::movement::node_get_fieldResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::node_get_fieldResponse_<ContainerAllocator> const> ConstPtr;

}; // struct node_get_fieldResponse_

typedef ::movement::node_get_fieldResponse_<std::allocator<void> > node_get_fieldResponse;

typedef boost::shared_ptr< ::movement::node_get_fieldResponse > node_get_fieldResponsePtr;
typedef boost::shared_ptr< ::movement::node_get_fieldResponse const> node_get_fieldResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::node_get_fieldResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::node_get_fieldResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::node_get_fieldResponse_<ContainerAllocator1> & lhs, const ::movement::node_get_fieldResponse_<ContainerAllocator2> & rhs)
{
  return lhs.field == rhs.field;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::node_get_fieldResponse_<ContainerAllocator1> & lhs, const ::movement::node_get_fieldResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::node_get_fieldResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::node_get_fieldResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_get_fieldResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::node_get_fieldResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_get_fieldResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::node_get_fieldResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::node_get_fieldResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e05f2ccbc5e22655a0890e2557862bd";
  }

  static const char* value(const ::movement::node_get_fieldResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e05f2ccbc5e2265ULL;
  static const uint64_t static_value2 = 0x5a0890e2557862bdULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::node_get_fieldResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/node_get_fieldResponse";
  }

  static const char* value(const ::movement::node_get_fieldResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::node_get_fieldResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 field\n"
"\n"
;
  }

  static const char* value(const ::movement::node_get_fieldResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::node_get_fieldResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct node_get_fieldResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::node_get_fieldResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::node_get_fieldResponse_<ContainerAllocator>& v)
  {
    s << indent << "field: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.field);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_NODE_GET_FIELDRESPONSE_H
