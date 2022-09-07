// Generated by gencpp from file tcc_msg/node_set_string.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_NODE_SET_STRING_H
#define TCC_MSG_MESSAGE_NODE_SET_STRING_H

#include <ros/service_traits.h>


#include <tcc_msg/node_set_stringRequest.h>
#include <tcc_msg/node_set_stringResponse.h>


namespace tcc_msg
{

struct node_set_string
{

typedef node_set_stringRequest Request;
typedef node_set_stringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct node_set_string
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::node_set_string > {
  static const char* value()
  {
    return "861607cfa9bd9ae700702d939e7f1dd7";
  }

  static const char* value(const ::tcc_msg::node_set_string&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::node_set_string > {
  static const char* value()
  {
    return "tcc_msg/node_set_string";
  }

  static const char* value(const ::tcc_msg::node_set_string&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::node_set_stringRequest> should match
// service_traits::MD5Sum< ::tcc_msg::node_set_string >
template<>
struct MD5Sum< ::tcc_msg::node_set_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_set_string >::value();
  }
  static const char* value(const ::tcc_msg::node_set_stringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_set_stringRequest> should match
// service_traits::DataType< ::tcc_msg::node_set_string >
template<>
struct DataType< ::tcc_msg::node_set_stringRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_set_string >::value();
  }
  static const char* value(const ::tcc_msg::node_set_stringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::node_set_stringResponse> should match
// service_traits::MD5Sum< ::tcc_msg::node_set_string >
template<>
struct MD5Sum< ::tcc_msg::node_set_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::node_set_string >::value();
  }
  static const char* value(const ::tcc_msg::node_set_stringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::node_set_stringResponse> should match
// service_traits::DataType< ::tcc_msg::node_set_string >
template<>
struct DataType< ::tcc_msg::node_set_stringResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::node_set_string >::value();
  }
  static const char* value(const ::tcc_msg::node_set_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_NODE_SET_STRING_H
