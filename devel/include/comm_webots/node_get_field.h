// Generated by gencpp from file comm_webots/node_get_field.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_H
#define COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_H

#include <ros/service_traits.h>


#include <comm_webots/node_get_fieldRequest.h>
#include <comm_webots/node_get_fieldResponse.h>


namespace comm_webots
{

struct node_get_field
{

typedef node_get_fieldRequest Request;
typedef node_get_fieldResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_get_field
} // namespace comm_webots


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::comm_webots::node_get_field > {
  static const char* value()
  {
    return "80105ddcb86dd98488ad3cf099686b86";
  }

  static const char* value(const ::comm_webots::node_get_field&) { return value(); }
};

template<>
struct DataType< ::comm_webots::node_get_field > {
  static const char* value()
  {
    return "comm_webots/node_get_field";
  }

  static const char* value(const ::comm_webots::node_get_field&) { return value(); }
};


// service_traits::MD5Sum< ::comm_webots::node_get_fieldRequest> should match
// service_traits::MD5Sum< ::comm_webots::node_get_field >
template<>
struct MD5Sum< ::comm_webots::node_get_fieldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::node_get_field >::value();
  }
  static const char* value(const ::comm_webots::node_get_fieldRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::node_get_fieldRequest> should match
// service_traits::DataType< ::comm_webots::node_get_field >
template<>
struct DataType< ::comm_webots::node_get_fieldRequest>
{
  static const char* value()
  {
    return DataType< ::comm_webots::node_get_field >::value();
  }
  static const char* value(const ::comm_webots::node_get_fieldRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::comm_webots::node_get_fieldResponse> should match
// service_traits::MD5Sum< ::comm_webots::node_get_field >
template<>
struct MD5Sum< ::comm_webots::node_get_fieldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::node_get_field >::value();
  }
  static const char* value(const ::comm_webots::node_get_fieldResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::node_get_fieldResponse> should match
// service_traits::DataType< ::comm_webots::node_get_field >
template<>
struct DataType< ::comm_webots::node_get_fieldResponse>
{
  static const char* value()
  {
    return DataType< ::comm_webots::node_get_field >::value();
  }
  static const char* value(const ::comm_webots::node_get_fieldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_NODE_GET_FIELD_H
