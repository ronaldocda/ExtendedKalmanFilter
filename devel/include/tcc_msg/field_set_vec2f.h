// Generated by gencpp from file tcc_msg/field_set_vec2f.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_FIELD_SET_VEC2F_H
#define TCC_MSG_MESSAGE_FIELD_SET_VEC2F_H

#include <ros/service_traits.h>


#include <tcc_msg/field_set_vec2fRequest.h>
#include <tcc_msg/field_set_vec2fResponse.h>


namespace tcc_msg
{

struct field_set_vec2f
{

typedef field_set_vec2fRequest Request;
typedef field_set_vec2fResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_set_vec2f
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::field_set_vec2f > {
  static const char* value()
  {
    return "e0edef5860d282e4d35ef264e28feecc";
  }

  static const char* value(const ::tcc_msg::field_set_vec2f&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::field_set_vec2f > {
  static const char* value()
  {
    return "tcc_msg/field_set_vec2f";
  }

  static const char* value(const ::tcc_msg::field_set_vec2f&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::field_set_vec2fRequest> should match
// service_traits::MD5Sum< ::tcc_msg::field_set_vec2f >
template<>
struct MD5Sum< ::tcc_msg::field_set_vec2fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::field_set_vec2f >::value();
  }
  static const char* value(const ::tcc_msg::field_set_vec2fRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::field_set_vec2fRequest> should match
// service_traits::DataType< ::tcc_msg::field_set_vec2f >
template<>
struct DataType< ::tcc_msg::field_set_vec2fRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::field_set_vec2f >::value();
  }
  static const char* value(const ::tcc_msg::field_set_vec2fRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::field_set_vec2fResponse> should match
// service_traits::MD5Sum< ::tcc_msg::field_set_vec2f >
template<>
struct MD5Sum< ::tcc_msg::field_set_vec2fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::field_set_vec2f >::value();
  }
  static const char* value(const ::tcc_msg::field_set_vec2fResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::field_set_vec2fResponse> should match
// service_traits::DataType< ::tcc_msg::field_set_vec2f >
template<>
struct DataType< ::tcc_msg::field_set_vec2fResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::field_set_vec2f >::value();
  }
  static const char* value(const ::tcc_msg::field_set_vec2fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_FIELD_SET_VEC2F_H
