// Generated by gencpp from file movement/skin_set_bone_position.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_SKIN_SET_BONE_POSITION_H
#define MOVEMENT_MESSAGE_SKIN_SET_BONE_POSITION_H

#include <ros/service_traits.h>


#include <movement/skin_set_bone_positionRequest.h>
#include <movement/skin_set_bone_positionResponse.h>


namespace movement
{

struct skin_set_bone_position
{

typedef skin_set_bone_positionRequest Request;
typedef skin_set_bone_positionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct skin_set_bone_position
} // namespace movement


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::movement::skin_set_bone_position > {
  static const char* value()
  {
    return "f009d6c1aead25b455139f2460ea63da";
  }

  static const char* value(const ::movement::skin_set_bone_position&) { return value(); }
};

template<>
struct DataType< ::movement::skin_set_bone_position > {
  static const char* value()
  {
    return "movement/skin_set_bone_position";
  }

  static const char* value(const ::movement::skin_set_bone_position&) { return value(); }
};


// service_traits::MD5Sum< ::movement::skin_set_bone_positionRequest> should match
// service_traits::MD5Sum< ::movement::skin_set_bone_position >
template<>
struct MD5Sum< ::movement::skin_set_bone_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::movement::skin_set_bone_position >::value();
  }
  static const char* value(const ::movement::skin_set_bone_positionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::skin_set_bone_positionRequest> should match
// service_traits::DataType< ::movement::skin_set_bone_position >
template<>
struct DataType< ::movement::skin_set_bone_positionRequest>
{
  static const char* value()
  {
    return DataType< ::movement::skin_set_bone_position >::value();
  }
  static const char* value(const ::movement::skin_set_bone_positionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::movement::skin_set_bone_positionResponse> should match
// service_traits::MD5Sum< ::movement::skin_set_bone_position >
template<>
struct MD5Sum< ::movement::skin_set_bone_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::movement::skin_set_bone_position >::value();
  }
  static const char* value(const ::movement::skin_set_bone_positionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::skin_set_bone_positionResponse> should match
// service_traits::DataType< ::movement::skin_set_bone_position >
template<>
struct DataType< ::movement::skin_set_bone_positionResponse>
{
  static const char* value()
  {
    return DataType< ::movement::skin_set_bone_position >::value();
  }
  static const char* value(const ::movement::skin_set_bone_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEMENT_MESSAGE_SKIN_SET_BONE_POSITION_H
