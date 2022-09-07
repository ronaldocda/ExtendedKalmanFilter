// Generated by gencpp from file tcc_msg/node_get_orientation.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_GET_ORIENTATION_H
#define TCC_MSG_MESSAGE_NODE_GET_ORIENTATION_H

#include <ros/service_traits.h>


#include <tcc_msg/node_get_orientationRequest.h>
#include <tcc_msg/node_get_orientationResponse.h>


namespace tcc_msg
{

struct node_get_orientation
{

typedef node_get_orientationRequest Request;
typedef node_get_orientationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_orientation
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::node_get_orientation > {
  static const char* value()
  {
    return "0ee7131d7182bae6debc79ddfcc90ddd";
  }

  static const char* value(const ::tcc_msg::node_get_orientation&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::node_get_orientation > {
  static const char* value()
  {
    return "tcc_msg/node_get_orientation";
  }

  static const char* value(const ::tcc_msg::node_get_orientation&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::node_get_orientationRequest> should match
// service_traits::MD5Sum< ::tcc_msg::node_get_orientation >
template<>
struct MD5Sum< ::tcc_msg::node_get_orientationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_get_orientation >::value();
  }
  static const char* value(const ::tcc_msg::node_get_orientationRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_get_orientationRequest> should match
// service_traits::DataType< ::tcc_msg::node_get_orientation >
template<>
struct DataType< ::tcc_msg::node_get_orientationRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_get_orientation >::value();
  }
  static const char* value(const ::tcc_msg::node_get_orientationRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::node_get_orientationResponse> should match
// service_traits::MD5Sum< ::tcc_msg::node_get_orientation >
template<>
struct MD5Sum< ::tcc_msg::node_get_orientationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_get_orientation >::value();
  }
  static const char* value(const ::tcc_msg::node_get_orientationResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_get_orientationResponse> should match
// service_traits::DataType< ::tcc_msg::node_get_orientation >
template<>
struct DataType< ::tcc_msg::node_get_orientationResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_get_orientation >::value();
  }
  static const char* value(const ::tcc_msg::node_get_orientationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_GET_ORIENTATION_H
