// Generated by gencpp from file comm_webots/field_import_node_from_string.msg
// DO NOT EDIT!


#ifndef COMM_WEBOTS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRING_H
#define COMM_WEBOTS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRING_H

#include <ros/service_traits.h>


#include <comm_webots/field_import_node_from_stringRequest.h>
#include <comm_webots/field_import_node_from_stringResponse.h>


namespace comm_webots
{

struct field_import_node_from_string
{

typedef field_import_node_from_stringRequest Request;
typedef field_import_node_from_stringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct field_import_node_from_string
} // namespace comm_webots


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::comm_webots::field_import_node_from_string > {
  static const char* value()
  {
    return "f47a09684279b85c2c8ae161048ce7d0";
  }

  static const char* value(const ::comm_webots::field_import_node_from_string&) { return value(); }
};

template<>
struct DataType< ::comm_webots::field_import_node_from_string > {
  static const char* value()
  {
    return "comm_webots/field_import_node_from_string";
  }

  static const char* value(const ::comm_webots::field_import_node_from_string&) { return value(); }
};


// service_traits::MD5Sum< ::comm_webots::field_import_node_from_stringRequest> should match
// service_traits::MD5Sum< ::comm_webots::field_import_node_from_string >
template<>
struct MD5Sum< ::comm_webots::field_import_node_from_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::field_import_node_from_string >::value();
  }
  static const char* value(const ::comm_webots::field_import_node_from_stringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::field_import_node_from_stringRequest> should match
// service_traits::DataType< ::comm_webots::field_import_node_from_string >
template<>
struct DataType< ::comm_webots::field_import_node_from_stringRequest>
{
  static const char* value()
  {
    return DataType< ::comm_webots::field_import_node_from_string >::value();
  }
  static const char* value(const ::comm_webots::field_import_node_from_stringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::comm_webots::field_import_node_from_stringResponse> should match
// service_traits::MD5Sum< ::comm_webots::field_import_node_from_string >
template<>
struct MD5Sum< ::comm_webots::field_import_node_from_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::comm_webots::field_import_node_from_string >::value();
  }
  static const char* value(const ::comm_webots::field_import_node_from_stringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::comm_webots::field_import_node_from_stringResponse> should match
// service_traits::DataType< ::comm_webots::field_import_node_from_string >
template<>
struct DataType< ::comm_webots::field_import_node_from_stringResponse>
{
  static const char* value()
  {
    return DataType< ::comm_webots::field_import_node_from_string >::value();
  }
  static const char* value(const ::comm_webots::field_import_node_from_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMM_WEBOTS_MESSAGE_FIELD_IMPORT_NODE_FROM_STRING_H
