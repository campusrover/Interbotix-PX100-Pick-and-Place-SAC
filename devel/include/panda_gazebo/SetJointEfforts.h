// Generated by gencpp from file panda_gazebo/SetJointEfforts.msg
// DO NOT EDIT!


#ifndef PANDA_GAZEBO_MESSAGE_SETJOINTEFFORTS_H
#define PANDA_GAZEBO_MESSAGE_SETJOINTEFFORTS_H

#include <ros/service_traits.h>


#include <panda_gazebo/SetJointEffortsRequest.h>
#include <panda_gazebo/SetJointEffortsResponse.h>


namespace panda_gazebo
{

struct SetJointEfforts
{

typedef SetJointEffortsRequest Request;
typedef SetJointEffortsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetJointEfforts
} // namespace panda_gazebo


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::panda_gazebo::SetJointEfforts > {
  static const char* value()
  {
    return "70ff964b809bd14f5476d470d36a5dc1";
  }

  static const char* value(const ::panda_gazebo::SetJointEfforts&) { return value(); }
};

template<>
struct DataType< ::panda_gazebo::SetJointEfforts > {
  static const char* value()
  {
    return "panda_gazebo/SetJointEfforts";
  }

  static const char* value(const ::panda_gazebo::SetJointEfforts&) { return value(); }
};


// service_traits::MD5Sum< ::panda_gazebo::SetJointEffortsRequest> should match
// service_traits::MD5Sum< ::panda_gazebo::SetJointEfforts >
template<>
struct MD5Sum< ::panda_gazebo::SetJointEffortsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::panda_gazebo::SetJointEfforts >::value();
  }
  static const char* value(const ::panda_gazebo::SetJointEffortsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::panda_gazebo::SetJointEffortsRequest> should match
// service_traits::DataType< ::panda_gazebo::SetJointEfforts >
template<>
struct DataType< ::panda_gazebo::SetJointEffortsRequest>
{
  static const char* value()
  {
    return DataType< ::panda_gazebo::SetJointEfforts >::value();
  }
  static const char* value(const ::panda_gazebo::SetJointEffortsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::panda_gazebo::SetJointEffortsResponse> should match
// service_traits::MD5Sum< ::panda_gazebo::SetJointEfforts >
template<>
struct MD5Sum< ::panda_gazebo::SetJointEffortsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::panda_gazebo::SetJointEfforts >::value();
  }
  static const char* value(const ::panda_gazebo::SetJointEffortsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::panda_gazebo::SetJointEffortsResponse> should match
// service_traits::DataType< ::panda_gazebo::SetJointEfforts >
template<>
struct DataType< ::panda_gazebo::SetJointEffortsResponse>
{
  static const char* value()
  {
    return DataType< ::panda_gazebo::SetJointEfforts >::value();
  }
  static const char* value(const ::panda_gazebo::SetJointEffortsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PANDA_GAZEBO_MESSAGE_SETJOINTEFFORTS_H