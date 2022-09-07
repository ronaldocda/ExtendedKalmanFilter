// Generated by gencpp from file comm_webots/field_get_string.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_FIELD_GET_STRING_H
#define COMM_WEBOTS_MESSAGE_FIELD_GET_STRING_H

#include <ros/service_traits.h>


#include <comm_webots/field_get_stringRequest.h>
#include <comm_webots/field_get_stringResponse.h>


namespace comm_webots
{

struct field_get_string
{

typedef field_get_stringRequest Request;
typedef field_get_stringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_get_string
} // namespace comm_webots


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::comm_webots::field_get_string > {
  static const char* value()
  {
    return "a1926692206ecc55a7a2d2564a578c89";
  }

  static const char* value(const ::comm_webots::field_get_string&) { return value(); }
};

template<>
struct DataType< ::comm_webots::field_get_string > {
  static const char* value()
  {
    return "comm_webots/field_get_string";
  }

  static const char* value(const ::comm_webots::field_get_string&) { return value(); }
};


// service_traits::MD5Sum< ::comm_webots::field_get_stringRequest> should match
// service_traits::MD5Sum< ::comm_webots::field_get_string >
template<>
struct MD5Sum< ::comm_webots::field_get_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::field_get_string >::value();
  }
  static const char* value(const ::comm_webots::field_get_stringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::field_get_stringRequest> should match
// service_traits::DataType< ::comm_webots::field_get_string >
template<>
struct DataType< ::comm_webots::field_get_stringRequest>
{
  static const char* value()
  {
    return DataType< ::comm_webots::field_get_string >::value();
  }
  static const char* value(const ::comm_webots::field_get_stringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::comm_webots::field_get_stringResponse> should match
// service_traits::MD5Sum< ::comm_webots::field_get_string >
template<>
struct MD5Sum< ::comm_webots::field_get_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::field_get_string >::value();
  }
  static const char* value(const ::comm_webots::field_get_stringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::field_get_stringResponse> should match
// service_traits::DataType< ::comm_webots::field_get_string >
template<>
struct DataType< ::comm_webots::field_get_stringResponse>
{
  static const char* value()
  {
    return DataType< ::comm_webots::field_get_string >::value();
  }
  static const char* value(const ::comm_webots::field_get_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_FIELD_GET_STRING_H
