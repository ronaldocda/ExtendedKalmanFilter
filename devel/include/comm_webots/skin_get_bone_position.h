// Generated by gencpp from file comm_webots/skin_get_bone_position.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_SKIN_GET_BONE_POSITION_H
#define COMM_WEBOTS_MESSAGE_SKIN_GET_BONE_POSITION_H

#include <ros/service_traits.h>


#include <comm_webots/skin_get_bone_positionRequest.h>
#include <comm_webots/skin_get_bone_positionResponse.h>


namespace comm_webots
{

struct skin_get_bone_position
{

typedef skin_get_bone_positionRequest Request;
typedef skin_get_bone_positionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct skin_get_bone_position
} // namespace comm_webots


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::comm_webots::skin_get_bone_position > {
  static const char* value()
  {
    return "c9870aedfb26769e03d175a5a34b1ff2";
  }

  static const char* value(const ::comm_webots::skin_get_bone_position&) { return value(); }
};

template<>
struct DataType< ::comm_webots::skin_get_bone_position > {
  static const char* value()
  {
    return "comm_webots/skin_get_bone_position";
  }

  static const char* value(const ::comm_webots::skin_get_bone_position&) { return value(); }
};


// service_traits::MD5Sum< ::comm_webots::skin_get_bone_positionRequest> should match
// service_traits::MD5Sum< ::comm_webots::skin_get_bone_position >
template<>
struct MD5Sum< ::comm_webots::skin_get_bone_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::skin_get_bone_position >::value();
  }
  static const char* value(const ::comm_webots::skin_get_bone_positionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::skin_get_bone_positionRequest> should match
// service_traits::DataType< ::comm_webots::skin_get_bone_position >
template<>
struct DataType< ::comm_webots::skin_get_bone_positionRequest>
{
  static const char* value()
  {
    return DataType< ::comm_webots::skin_get_bone_position >::value();
  }
  static const char* value(const ::comm_webots::skin_get_bone_positionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::comm_webots::skin_get_bone_positionResponse> should match
// service_traits::MD5Sum< ::comm_webots::skin_get_bone_position >
template<>
struct MD5Sum< ::comm_webots::skin_get_bone_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::skin_get_bone_position >::value();
  }
  static const char* value(const ::comm_webots::skin_get_bone_positionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::skin_get_bone_positionResponse> should match
// service_traits::DataType< ::comm_webots::skin_get_bone_position >
template<>
struct DataType< ::comm_webots::skin_get_bone_positionResponse>
{
  static const char* value()
  {
    return DataType< ::comm_webots::skin_get_bone_position >::value();
  }
  static const char* value(const ::comm_webots::skin_get_bone_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_SKIN_GET_BONE_POSITION_H
