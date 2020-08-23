// Generated by gencpp from file icra_nav/c_start_end_srv.msg
// DO NOT EDIT!


#ifndef ICRA_NAV_MESSAGE_C_START_END_SRV_H
#define ICRA_NAV_MESSAGE_C_START_END_SRV_H

#include <ros/service_traits.h>


#include <icra_nav/c_start_end_srvRequest.h>
#include <icra_nav/c_start_end_srvResponse.h>


namespace icra_nav
{

struct c_start_end_srv
{

typedef c_start_end_srvRequest Request;
typedef c_start_end_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct c_start_end_srv
} // namespace icra_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::icra_nav::c_start_end_srv > {
  static const char* value()
  {
    return "3ab9bc810918bba29099b96e055d02bf";
  }

  static const char* value(const ::icra_nav::c_start_end_srv&) { return value(); }
};

template<>
struct DataType< ::icra_nav::c_start_end_srv > {
  static const char* value()
  {
    return "icra_nav/c_start_end_srv";
  }

  static const char* value(const ::icra_nav::c_start_end_srv&) { return value(); }
};


// service_traits::MD5Sum< ::icra_nav::c_start_end_srvRequest> should match 
// service_traits::MD5Sum< ::icra_nav::c_start_end_srv > 
template<>
struct MD5Sum< ::icra_nav::c_start_end_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::c_start_end_srv >::value();
  }
  static const char* value(const ::icra_nav::c_start_end_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::c_start_end_srvRequest> should match 
// service_traits::DataType< ::icra_nav::c_start_end_srv > 
template<>
struct DataType< ::icra_nav::c_start_end_srvRequest>
{
  static const char* value()
  {
    return DataType< ::icra_nav::c_start_end_srv >::value();
  }
  static const char* value(const ::icra_nav::c_start_end_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::icra_nav::c_start_end_srvResponse> should match 
// service_traits::MD5Sum< ::icra_nav::c_start_end_srv > 
template<>
struct MD5Sum< ::icra_nav::c_start_end_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::c_start_end_srv >::value();
  }
  static const char* value(const ::icra_nav::c_start_end_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::c_start_end_srvResponse> should match 
// service_traits::DataType< ::icra_nav::c_start_end_srv > 
template<>
struct DataType< ::icra_nav::c_start_end_srvResponse>
{
  static const char* value()
  {
    return DataType< ::icra_nav::c_start_end_srv >::value();
  }
  static const char* value(const ::icra_nav::c_start_end_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ICRA_NAV_MESSAGE_C_START_END_SRV_H
