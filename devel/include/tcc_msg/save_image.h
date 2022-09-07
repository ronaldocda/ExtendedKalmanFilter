// Generated by gencpp from file tcc_msg/save_image.msg
// DO NOT EDIT!


#ifndef TCC_MSG_MESSAGE_SAVE_IMAGE_H
#define TCC_MSG_MESSAGE_SAVE_IMAGE_H

#include <ros/service_traits.h>


#include <tcc_msg/save_imageRequest.h>
#include <tcc_msg/save_imageResponse.h>


namespace tcc_msg
{

struct save_image
{

typedef save_imageRequest Request;
typedef save_imageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct save_image
} // namespace tcc_msg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::tcc_msg::save_image > {
  static const char* value()
  {
    return "9f4c973c7b1d0924ab26586269d7499e";
  }

  static const char* value(const ::tcc_msg::save_image&) { return value(); }
};

template<>
struct DataType< ::tcc_msg::save_image > {
  static const char* value()
  {
    return "tcc_msg/save_image";
  }

  static const char* value(const ::tcc_msg::save_image&) { return value(); }
};


// service_traits::MD5Sum< ::tcc_msg::save_imageRequest> should match
// service_traits::MD5Sum< ::tcc_msg::save_image >
template<>
struct MD5Sum< ::tcc_msg::save_imageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::save_image >::value();
  }
  static const char* value(const ::tcc_msg::save_imageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::save_imageRequest> should match
// service_traits::DataType< ::tcc_msg::save_image >
template<>
struct DataType< ::tcc_msg::save_imageRequest>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::save_image >::value();
  }
  static const char* value(const ::tcc_msg::save_imageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::tcc_msg::save_imageResponse> should match
// service_traits::MD5Sum< ::tcc_msg::save_image >
template<>
struct MD5Sum< ::tcc_msg::save_imageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::tcc_msg::save_image >::value();
  }
  static const char* value(const ::tcc_msg::save_imageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::tcc_msg::save_imageResponse> should match
// service_traits::DataType< ::tcc_msg::save_image >
template<>
struct DataType< ::tcc_msg::save_imageResponse>
{
  static const char* value()
  {
    return DataType< ::tcc_msg::save_image >::value();
  }
  static const char* value(const ::tcc_msg::save_imageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TCC_MSG_MESSAGE_SAVE_IMAGE_H
