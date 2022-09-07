// Generated by gencpp from file movement/speaker_is_sound_playingResponse.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H
#define MOVEMENT_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H


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
struct speaker_is_sound_playingResponse_
{
  typedef speaker_is_sound_playingResponse_<ContainerAllocator> Type;

  speaker_is_sound_playingResponse_()
    : value(false)  {
    }
  speaker_is_sound_playingResponse_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct speaker_is_sound_playingResponse_

typedef ::movement::speaker_is_sound_playingResponse_<std::allocator<void> > speaker_is_sound_playingResponse;

typedef boost::shared_ptr< ::movement::speaker_is_sound_playingResponse > speaker_is_sound_playingResponsePtr;
typedef boost::shared_ptr< ::movement::speaker_is_sound_playingResponse const> speaker_is_sound_playingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator1> & lhs, const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator1> & lhs, const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace movement

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "movement/speaker_is_sound_playingResponse";
  }

  static const char* value(const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n"
"\n"
;
  }

  static const char* value(const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct speaker_is_sound_playingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::movement::speaker_is_sound_playingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::movement::speaker_is_sound_playingResponse_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEMENT_MESSAGE_SPEAKER_IS_SOUND_PLAYINGRESPONSE_H
