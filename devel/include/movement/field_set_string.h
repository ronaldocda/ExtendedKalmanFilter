// Generated by gencpp from file movement/field_set_string.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_FIELD_SET_STRING_H
#define MOVEMENT_MESSAGE_FIELD_SET_STRING_H

#include <ros/service_traits.h>


#include <movement/field_set_stringRequest.h>
#include <movement/field_set_stringResponse.h>


namespace movement
{

struct field_set_string
{

typedef field_set_stringRequest Request;
typedef field_set_stringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_string
} // namespace movement


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::movement::field_set_string > {
  static const char* value()
  {
    return "a84b2f7623a3316b5dc8470fcbf631fd";
  }

  static const char* value(const ::movement::field_set_string&) { return value(); }
};

template<>
struct DataType< ::movement::field_set_string > {
  static const char* value()
  {
    return "movement/field_set_string";
  }

  static const char* value(const ::movement::field_set_string&) { return value(); }
};


// service_traits::MD5Sum< ::movement::field_set_stringRequest> should match
// service_traits::MD5Sum< ::movement::field_set_string >
template<>
struct MD5Sum< ::movement::field_set_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::movement::field_set_string >::value();
  }
  static const char* value(const ::movement::field_set_stringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::field_set_stringRequest> should match
// service_traits::DataType< ::movement::field_set_string >
template<>
struct DataType< ::movement::field_set_stringRequest>
{
  static const char* value()
  {
    return DataType< ::movement::field_set_string >::value();
  }
  static const char* value(const ::movement::field_set_stringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::movement::field_set_stringResponse> should match
// service_traits::MD5Sum< ::movement::field_set_string >
template<>
struct MD5Sum< ::movement::field_set_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::movement::field_set_string >::value();
  }
  static const char* value(const ::movement::field_set_stringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::field_set_stringResponse> should match
// service_traits::DataType< ::movement::field_set_string >
template<>
struct DataType< ::movement::field_set_stringResponse>
{
  static const char* value()
  {
    return DataType< ::movement::field_set_string >::value();
  }
  static const char* value(const ::movement::field_set_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEMENT_MESSAGE_FIELD_SET_STRING_H
