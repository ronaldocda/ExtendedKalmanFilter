// Generated by gencpp from file tcc_msg/SendPositonCommPy.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SENDPOSITONCOMMPY_H
#define TCC_MSG_MESSAGE_SENDPOSITONCOMMPY_H

#include <ros/service_traits.h>


#include <tcc_msg/SendPositonCommPyRequest.h>
#include <tcc_msg/SendPositonCommPyResponse.h>


namespace tcc_msg
{

struct SendPositonCommPy
{

typedef SendPositonCommPyRequest Request;
typedef SendPositonCommPyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendPositonCommPy
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::SendPositonCommPy > {
  static const char* value()
  {
    return "acb524fbac00926fc8ce7e7c36ae4e03";
  }

  static const char* value(const ::tcc_msg::SendPositonCommPy&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::SendPositonCommPy > {
  static const char* value()
  {
    return "tcc_msg/SendPositonCommPy";
  }

  static const char* value(const ::tcc_msg::SendPositonCommPy&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::SendPositonCommPyRequest> should match
// service_traits::MD5Sum< ::tcc_msg::SendPositonCommPy >
template<>
struct MD5Sum< ::tcc_msg::SendPositonCommPyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::SendPositonCommPy >::value();
  }
  static const char* value(const ::tcc_msg::SendPositonCommPyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::SendPositonCommPyRequest> should match
// service_traits::DataType< ::tcc_msg::SendPositonCommPy >
template<>
struct DataType< ::tcc_msg::SendPositonCommPyRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::SendPositonCommPy >::value();
  }
  static const char* value(const ::tcc_msg::SendPositonCommPyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::SendPositonCommPyResponse> should match
// service_traits::MD5Sum< ::tcc_msg::SendPositonCommPy >
template<>
struct MD5Sum< ::tcc_msg::SendPositonCommPyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::SendPositonCommPy >::value();
  }
  static const char* value(const ::tcc_msg::SendPositonCommPyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::SendPositonCommPyResponse> should match
// service_traits::DataType< ::tcc_msg::SendPositonCommPy >
template<>
struct DataType< ::tcc_msg::SendPositonCommPyResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::SendPositonCommPy >::value();
  }
  static const char* value(const ::tcc_msg::SendPositonCommPyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_SENDPOSITONCOMMPY_H
