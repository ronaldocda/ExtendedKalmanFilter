// Generated by gencpp from file movement/node_get_velocity.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_NODE_GET_VELOCITY_H
#define MOVEMENT_MESSAGE_NODE_GET_VELOCITY_H

#include <ros/service_traits.h>


#include <movement/node_get_velocityRequest.h>
#include <movement/node_get_velocityResponse.h>


namespace movement
{

struct node_get_velocity
{

typedef node_get_velocityRequest Request;
typedef node_get_velocityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_velocity
} // namespace movement


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::movement::node_get_velocity > {
  static const char* value()
  {
    return "f50dcf3848a1b2dce54e5fbe9ff12eac";
  }

  static const char* value(const ::movement::node_get_velocity&) { return value(); }
};

template<>
struct DataType< ::movement::node_get_velocity > {
  static const char* value()
  {
    return "movement/node_get_velocity";
  }

  static const char* value(const ::movement::node_get_velocity&) { return value(); }
};


// service_traits::MD5Sum< ::movement::node_get_velocityRequest> should match
// service_traits::MD5Sum< ::movement::node_get_velocity >
template<>
struct MD5Sum< ::movement::node_get_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::movement::node_get_velocity >::value();
  }
  static const char* value(const ::movement::node_get_velocityRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::node_get_velocityRequest> should match
// service_traits::DataType< ::movement::node_get_velocity >
template<>
struct DataType< ::movement::node_get_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::movement::node_get_velocity >::value();
  }
  static const char* value(const ::movement::node_get_velocityRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::movement::node_get_velocityResponse> should match
// service_traits::MD5Sum< ::movement::node_get_velocity >
template<>
struct MD5Sum< ::movement::node_get_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::movement::node_get_velocity >::value();
  }
  static const char* value(const ::movement::node_get_velocityResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::node_get_velocityResponse> should match
// service_traits::DataType< ::movement::node_get_velocity >
template<>
struct DataType< ::movement::node_get_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::movement::node_get_velocity >::value();
  }
  static const char* value(const ::movement::node_get_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEMENT_MESSAGE_NODE_GET_VELOCITY_H
