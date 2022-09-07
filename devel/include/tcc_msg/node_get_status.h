// Generated by gencpp from file tcc_msg/node_get_status.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_GET_STATUS_H
#define TCC_MSG_MESSAGE_NODE_GET_STATUS_H

#include <ros/service_traits.h>


#include <tcc_msg/node_get_statusRequest.h>
#include <tcc_msg/node_get_statusResponse.h>


namespace tcc_msg
{

struct node_get_status
{

typedef node_get_statusRequest Request;
typedef node_get_statusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_status
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::node_get_status > {
  static const char* value()
  {
    return "9d10c008835cf4bd024a6af9eca46c13";
  }

  static const char* value(const ::tcc_msg::node_get_status&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::node_get_status > {
  static const char* value()
  {
    return "tcc_msg/node_get_status";
  }

  static const char* value(const ::tcc_msg::node_get_status&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::node_get_statusRequest> should match
// service_traits::MD5Sum< ::tcc_msg::node_get_status >
template<>
struct MD5Sum< ::tcc_msg::node_get_statusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_get_status >::value();
  }
  static const char* value(const ::tcc_msg::node_get_statusRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_get_statusRequest> should match
// service_traits::DataType< ::tcc_msg::node_get_status >
template<>
struct DataType< ::tcc_msg::node_get_statusRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_get_status >::value();
  }
  static const char* value(const ::tcc_msg::node_get_statusRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::node_get_statusResponse> should match
// service_traits::MD5Sum< ::tcc_msg::node_get_status >
template<>
struct MD5Sum< ::tcc_msg::node_get_statusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_get_status >::value();
  }
  static const char* value(const ::tcc_msg::node_get_statusResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_get_statusResponse> should match
// service_traits::DataType< ::tcc_msg::node_get_status >
template<>
struct DataType< ::tcc_msg::node_get_statusResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_get_status >::value();
  }
  static const char* value(const ::tcc_msg::node_get_statusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_GET_STATUS_H
