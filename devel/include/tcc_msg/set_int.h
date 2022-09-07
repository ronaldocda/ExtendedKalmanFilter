// Generated by gencpp from file tcc_msg/set_int.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SET_INT_H
#define TCC_MSG_MESSAGE_SET_INT_H

#include <ros/service_traits.h>


#include <tcc_msg/set_intRequest.h>
#include <tcc_msg/set_intResponse.h>


namespace tcc_msg
{

struct set_int
{

typedef set_intRequest Request;
typedef set_intResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct set_int
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::set_int > {
  static const char* value()
  {
    return "bc437afb45673379bdb9f299f9cbbc9e";
  }

  static const char* value(const ::tcc_msg::set_int&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::set_int > {
  static const char* value()
  {
    return "tcc_msg/set_int";
  }

  static const char* value(const ::tcc_msg::set_int&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::set_intRequest> should match
// service_traits::MD5Sum< ::tcc_msg::set_int >
template<>
struct MD5Sum< ::tcc_msg::set_intRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::set_int >::value();
  }
  static const char* value(const ::tcc_msg::set_intRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::set_intRequest> should match
// service_traits::DataType< ::tcc_msg::set_int >
template<>
struct DataType< ::tcc_msg::set_intRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::set_int >::value();
  }
  static const char* value(const ::tcc_msg::set_intRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::set_intResponse> should match
// service_traits::MD5Sum< ::tcc_msg::set_int >
template<>
struct MD5Sum< ::tcc_msg::set_intResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::set_int >::value();
  }
  static const char* value(const ::tcc_msg::set_intResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::set_intResponse> should match
// service_traits::DataType< ::tcc_msg::set_int >
template<>
struct DataType< ::tcc_msg::set_intResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::set_int >::value();
  }
  static const char* value(const ::tcc_msg::set_intResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_SET_INT_H
