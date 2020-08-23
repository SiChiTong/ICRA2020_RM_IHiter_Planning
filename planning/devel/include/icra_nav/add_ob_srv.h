// Generated by gencpp from file icra_nav/add_ob_srv.msg
// DO NOT EDIT!


#ifndef ICRA_NAV_MESSAGE_ADD_OB_SRV_H
#define ICRA_NAV_MESSAGE_ADD_OB_SRV_H

#include <ros/service_traits.h>


#include <icra_nav/add_ob_srvRequest.h>
#include <icra_nav/add_ob_srvResponse.h>


namespace icra_nav
{

struct add_ob_srv
{

typedef add_ob_srvRequest Request;
typedef add_ob_srvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct add_ob_srv
} // namespace icra_nav


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::icra_nav::add_ob_srv > {
  static const char* value()
  {
    return "af88fad9fb4ff2ed0a7581060e7c41e9";
  }

  static const char* value(const ::icra_nav::add_ob_srv&) { return value(); }
};

template<>
struct DataType< ::icra_nav::add_ob_srv > {
  static const char* value()
  {
    return "icra_nav/add_ob_srv";
  }

  static const char* value(const ::icra_nav::add_ob_srv&) { return value(); }
};


// service_traits::MD5Sum< ::icra_nav::add_ob_srvRequest> should match 
// service_traits::MD5Sum< ::icra_nav::add_ob_srv > 
template<>
struct MD5Sum< ::icra_nav::add_ob_srvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::add_ob_srv >::value();
  }
  static const char* value(const ::icra_nav::add_ob_srvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::add_ob_srvRequest> should match 
// service_traits::DataType< ::icra_nav::add_ob_srv > 
template<>
struct DataType< ::icra_nav::add_ob_srvRequest>
{
  static const char* value()
  {
    return DataType< ::icra_nav::add_ob_srv >::value();
  }
  static const char* value(const ::icra_nav::add_ob_srvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::icra_nav::add_ob_srvResponse> should match 
// service_traits::MD5Sum< ::icra_nav::add_ob_srv > 
template<>
struct MD5Sum< ::icra_nav::add_ob_srvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::icra_nav::add_ob_srv >::value();
  }
  static const char* value(const ::icra_nav::add_ob_srvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::icra_nav::add_ob_srvResponse> should match 
// service_traits::DataType< ::icra_nav::add_ob_srv > 
template<>
struct DataType< ::icra_nav::add_ob_srvResponse>
{
  static const char* value()
  {
    return DataType< ::icra_nav::add_ob_srv >::value();
  }
  static const char* value(const ::icra_nav::add_ob_srvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ICRA_NAV_MESSAGE_ADD_OB_SRV_H
