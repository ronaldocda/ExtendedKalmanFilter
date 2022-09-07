// Generated by gencpp from file movement/display_image_delete.msg
// DO NOT EDIT!


#ifndef MOVEMENT_MESSAGE_DISPLAY_IMAGE_DELETE_H
#define MOVEMENT_MESSAGE_DISPLAY_IMAGE_DELETE_H

#include <ros/service_traits.h>


#include <movement/display_image_deleteRequest.h>
#include <movement/display_image_deleteResponse.h>


namespace movement
{

struct display_image_delete
{

typedef display_image_deleteRequest Request;
typedef display_image_deleteResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct display_image_delete
} // namespace movement


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::movement::display_image_delete > {
  static const char* value()
  {
    return "21daf18e23f8cc4ce4452efc995e69da";
  }

  static const char* value(const ::movement::display_image_delete&) { return value(); }
};

template<>
struct DataType< ::movement::display_image_delete > {
  static const char* value()
  {
    return "movement/display_image_delete";
  }

  static const char* value(const ::movement::display_image_delete&) { return value(); }
};


// service_traits::MD5Sum< ::movement::display_image_deleteRequest> should match
// service_traits::MD5Sum< ::movement::display_image_delete >
template<>
struct MD5Sum< ::movement::display_image_deleteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::movement::display_image_delete >::value();
  }
  static const char* value(const ::movement::display_image_deleteRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::display_image_deleteRequest> should match
// service_traits::DataType< ::movement::display_image_delete >
template<>
struct DataType< ::movement::display_image_deleteRequest>
{
  static const char* value()
  {
    return DataType< ::movement::display_image_delete >::value();
  }
  static const char* value(const ::movement::display_image_deleteRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::movement::display_image_deleteResponse> should match
// service_traits::MD5Sum< ::movement::display_image_delete >
template<>
struct MD5Sum< ::movement::display_image_deleteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::movement::display_image_delete >::value();
  }
  static const char* value(const ::movement::display_image_deleteResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::movement::display_image_deleteResponse> should match
// service_traits::DataType< ::movement::display_image_delete >
template<>
struct DataType< ::movement::display_image_deleteResponse>
{
  static const char* value()
  {
    return DataType< ::movement::display_image_delete >::value();
  }
  static const char* value(const ::movement::display_image_deleteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEMENT_MESSAGE_DISPLAY_IMAGE_DELETE_H
