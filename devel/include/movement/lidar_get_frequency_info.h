// Generated by gencpp from file movement/lidar_get_frequency_info.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H
#define MOVEMENT_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H

#include <ros/service_traits.h>


#include <movement/lidar_get_frequency_infoRequest.h>
#include <movement/lidar_get_frequency_infoResponse.h>


namespace movement
{

struct lidar_get_frequency_info
{

typedef lidar_get_frequency_infoRequest Request;
typedef lidar_get_frequency_infoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct lidar_get_frequency_info
} // namespace movement


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::movement::lidar_get_frequency_info > {
  static const char* value()
  {
    return "205acd1972da2259229a25bf7e756656";
  }

  static const char* value(const ::movement::lidar_get_frequency_info&) { return value(); }
};

template<>
struct DataType< ::movement::lidar_get_frequency_info > {
  static const char* value()
  {
    return "movement/lidar_get_frequency_info";
  }

  static const char* value(const ::movement::lidar_get_frequency_info&) { return value(); }
};


// service_traits::MD5Sum< ::movement::lidar_get_frequency_infoRequest> should match
// service_traits::MD5Sum< ::movement::lidar_get_frequency_info >
template<>
struct MD5Sum< ::movement::lidar_get_frequency_infoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::movement::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::movement::lidar_get_frequency_infoRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::lidar_get_frequency_infoRequest> should match
// service_traits::DataType< ::movement::lidar_get_frequency_info >
template<>
struct DataType< ::movement::lidar_get_frequency_infoRequest>
{
  static const char* value()
  {
    return DataType< ::movement::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::movement::lidar_get_frequency_infoRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::movement::lidar_get_frequency_infoResponse> should match
// service_traits::MD5Sum< ::movement::lidar_get_frequency_info >
template<>
struct MD5Sum< ::movement::lidar_get_frequency_infoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::movement::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::movement::lidar_get_frequency_infoResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::lidar_get_frequency_infoResponse> should match
// service_traits::DataType< ::movement::lidar_get_frequency_info >
template<>
struct DataType< ::movement::lidar_get_frequency_infoResponse>
{
  static const char* value()
  {
    return DataType< ::movement::lidar_get_frequency_info >::value();
  }
  static const char* value(const ::movement::lidar_get_frequency_infoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEMENT_MESSAGE_LIDAR_GET_FREQUENCY_INFO_H
