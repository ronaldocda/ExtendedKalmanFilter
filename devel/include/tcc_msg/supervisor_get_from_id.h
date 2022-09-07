// Generated by gencpp from file tcc_msg/supervisor_get_from_id.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_ID_H
#define TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_ID_H

#include <ros/service_traits.h>


#include <tcc_msg/supervisor_get_from_idRequest.h>
#include <tcc_msg/supervisor_get_from_idResponse.h>


namespace tcc_msg
{

struct supervisor_get_from_id
{

typedef supervisor_get_from_idRequest Request;
typedef supervisor_get_from_idResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct supervisor_get_from_id
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_id > {
  static const char* value()
  {
    return "398e4930ac99b6ae9bc51fa66b0d9846";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_id&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::supervisor_get_from_id > {
  static const char* value()
  {
    return "tcc_msg/supervisor_get_from_id";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_id&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_idRequest> should match
// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_id >
template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_idRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::supervisor_get_from_id >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_idRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::supervisor_get_from_idRequest> should match
// service_traits::DataType< ::tcc_msg::supervisor_get_from_id >
template<>
struct DataType< ::tcc_msg::supervisor_get_from_idRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::supervisor_get_from_id >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_idRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_idResponse> should match
// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_id >
template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_idResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::supervisor_get_from_id >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_idResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::supervisor_get_from_idResponse> should match
// service_traits::DataType< ::tcc_msg::supervisor_get_from_id >
template<>
struct DataType< ::tcc_msg::supervisor_get_from_idResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::supervisor_get_from_id >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_idResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_ID_H
