// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces_anscer:srv/CsvPath.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__BUILDER_HPP_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces_anscer/srv/detail/csv_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces_anscer
{

namespace srv
{

namespace builder
{

class Init_CsvPath_Request_filepath
{
public:
  Init_CsvPath_Request_filepath()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces_anscer::srv::CsvPath_Request filepath(::custom_interfaces_anscer::srv::CsvPath_Request::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::CsvPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces_anscer::srv::CsvPath_Request>()
{
  return custom_interfaces_anscer::srv::builder::Init_CsvPath_Request_filepath();
}

}  // namespace custom_interfaces_anscer


namespace custom_interfaces_anscer
{

namespace srv
{

namespace builder
{

class Init_CsvPath_Response_message
{
public:
  explicit Init_CsvPath_Response_message(::custom_interfaces_anscer::srv::CsvPath_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces_anscer::srv::CsvPath_Response message(::custom_interfaces_anscer::srv::CsvPath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::CsvPath_Response msg_;
};

class Init_CsvPath_Response_success
{
public:
  Init_CsvPath_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CsvPath_Response_message success(::custom_interfaces_anscer::srv::CsvPath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CsvPath_Response_message(msg_);
  }

private:
  ::custom_interfaces_anscer::srv::CsvPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces_anscer::srv::CsvPath_Response>()
{
  return custom_interfaces_anscer::srv::builder::Init_CsvPath_Response_success();
}

}  // namespace custom_interfaces_anscer

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__BUILDER_HPP_
