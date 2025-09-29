// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces_anscer:srv/TimeInSec.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__BUILDER_HPP_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces_anscer/srv/detail/time_in_sec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces_anscer
{

namespace srv
{

namespace builder
{

class Init_TimeInSec_Request_time_sec
{
public:
  Init_TimeInSec_Request_time_sec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces_anscer::srv::TimeInSec_Request time_sec(::custom_interfaces_anscer::srv::TimeInSec_Request::_time_sec_type arg)
  {
    msg_.time_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::TimeInSec_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces_anscer::srv::TimeInSec_Request>()
{
  return custom_interfaces_anscer::srv::builder::Init_TimeInSec_Request_time_sec();
}

}  // namespace custom_interfaces_anscer


namespace custom_interfaces_anscer
{

namespace srv
{

namespace builder
{

class Init_TimeInSec_Response_message
{
public:
  explicit Init_TimeInSec_Response_message(::custom_interfaces_anscer::srv::TimeInSec_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces_anscer::srv::TimeInSec_Response message(::custom_interfaces_anscer::srv::TimeInSec_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::TimeInSec_Response msg_;
};

class Init_TimeInSec_Response_success
{
public:
  Init_TimeInSec_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeInSec_Response_message success(::custom_interfaces_anscer::srv::TimeInSec_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TimeInSec_Response_message(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::TimeInSec_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces_anscer::srv::TimeInSec_Response>()
{
  return custom_interfaces_anscer::srv::builder::Init_TimeInSec_Response_success();
}

}  // namespace custom_interfaces_anscer

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__BUILDER_HPP_
