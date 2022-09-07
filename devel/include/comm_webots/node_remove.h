// Generated by gencpp from file comm_webots/node_remove.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_REMOVE_H
#define COMM_WEBOTS_MESSAGE_NODE_REMOVE_H

#include <ros/service_traits.h>


#include <comm_webots/node_removeRequest.h>
#include <comm_webots/node_removeResponse.h>


namespace comm_webots
{

struct node_remove
{

typedef node_removeRequest Request;
typedef node_removeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_remove
} // namespace comm_webots


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::comm_webots::node_remove > {
  static const char* value()
  {
    return "594d3b785623c78d3382c6628faa0f8c";
  }

  static const char* value(const ::comm_webots::node_remove&) { return value(); }
};

template<>
struct DataType< ::comm_webots::node_remove > {
  static const char* value()
  {
    return "comm_webots/node_remove";
  }

  static const char* value(const ::comm_webots::node_remove&) { return value(); }
};


// service_traits::MD5Sum< ::comm_webots::node_removeRequest> should match
// service_traits::MD5Sum< ::comm_webots::node_remove >
template<>
struct MD5Sum< ::comm_webots::node_removeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::node_remove >::value();
  }
  static const char* value(const ::comm_webots::node_removeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::node_removeRequest> should match
// service_traits::DataType< ::comm_webots::node_remove >
template<>
struct DataType< ::comm_webots::node_removeRequest>
{
  static const char* value()
  {
    return DataType< ::comm_webots::node_remove >::value();
  }
  static const char* value(const ::comm_webots::node_removeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::comm_webots::node_removeResponse> should match
// service_traits::MD5Sum< ::comm_webots::node_remove >
template<>
struct MD5Sum< ::comm_webots::node_removeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::node_remove >::value();
  }
  static const char* value(const ::comm_webots::node_removeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::node_removeResponse> should match
// service_traits::DataType< ::comm_webots::node_remove >
template<>
struct DataType< ::comm_webots::node_removeResponse>
{
  static const char* value()
  {
    return DataType< ::comm_webots::node_remove >::value();
  }
  static const char* value(const ::comm_webots::node_removeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_REMOVE_H
