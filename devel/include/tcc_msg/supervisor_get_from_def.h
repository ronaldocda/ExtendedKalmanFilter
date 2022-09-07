// Generated by gencpp from file tcc_msg/supervisor_get_from_def.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_DEF_H
#define TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_DEF_H

#include <ros/service_traits.h>


#include <tcc_msg/supervisor_get_from_defRequest.h>
#include <tcc_msg/supervisor_get_from_defResponse.h>


namespace tcc_msg
{

struct supervisor_get_from_def
{

typedef supervisor_get_from_defRequest Request;
typedef supervisor_get_from_defResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct supervisor_get_from_def
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_def > {
  static const char* value()
  {
    return "6f2b7f6ebcd546dbcec5be5ad142c165";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_def&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::supervisor_get_from_def > {
  static const char* value()
  {
    return "tcc_msg/supervisor_get_from_def";
  }

  static const char* value(const ::tcc_msg::supervisor_get_from_def&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_defRequest> should match
// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_def >
template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::supervisor_get_from_def >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_defRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::supervisor_get_from_defRequest> should match
// service_traits::DataType< ::tcc_msg::supervisor_get_from_def >
template<>
struct DataType< ::tcc_msg::supervisor_get_from_defRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::supervisor_get_from_def >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_defRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_defResponse> should match
// service_traits::MD5Sum< ::tcc_msg::supervisor_get_from_def >
template<>
struct MD5Sum< ::tcc_msg::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::supervisor_get_from_def >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::supervisor_get_from_defResponse> should match
// service_traits::DataType< ::tcc_msg::supervisor_get_from_def >
template<>
struct DataType< ::tcc_msg::supervisor_get_from_defResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::supervisor_get_from_def >::value();
  }
  static const char* value(const ::tcc_msg::supervisor_get_from_defResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_SUPERVISOR_GET_FROM_DEF_H
