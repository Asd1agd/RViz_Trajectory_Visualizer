// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_interfaces_anscer:srv/CsvPath.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__TRAITS_HPP_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_interfaces_anscer/srv/detail/csv_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_interfaces_anscer
{

namespace srv
{

inline void to_flow_style_yaml(
  const CsvPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filepath
  {
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CsvPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CsvPath_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces_anscer

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces_anscer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces_anscer::srv::CsvPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces_anscer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces_anscer::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces_anscer::srv::CsvPath_Request & msg)
{
  return custom_interfaces_anscer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces_anscer::srv::CsvPath_Request>()
{
  return "custom_interfaces_anscer::srv::CsvPath_Request";
}

template<>
inline const char * name<custom_interfaces_anscer::srv::CsvPath_Request>()
{
  return "custom_interfaces_anscer/srv/CsvPath_Request";
}

template<>
struct has_fixed_size<custom_interfaces_anscer::srv::CsvPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces_anscer::srv::CsvPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces_anscer::srv::CsvPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_interfaces_anscer
{

namespace srv
{

inline void to_flow_style_yaml(
  const CsvPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CsvPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CsvPath_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_interfaces_anscer

namespace rosidl_generator_traits
{

[[deprecated("use custom_interfaces_anscer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_interfaces_anscer::srv::CsvPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_interfaces_anscer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_interfaces_anscer::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_interfaces_anscer::srv::CsvPath_Response & msg)
{
  return custom_interfaces_anscer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_interfaces_anscer::srv::CsvPath_Response>()
{
  return "custom_interfaces_anscer::srv::CsvPath_Response";
}

template<>
inline const char * name<custom_interfaces_anscer::srv::CsvPath_Response>()
{
  return "custom_interfaces_anscer/srv/CsvPath_Response";
}

template<>
struct has_fixed_size<custom_interfaces_anscer::srv::CsvPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_interfaces_anscer::srv::CsvPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_interfaces_anscer::srv::CsvPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_interfaces_anscer::srv::CsvPath>()
{
  return "custom_interfaces_anscer::srv::CsvPath";
}

template<>
inline const char * name<custom_interfaces_anscer::srv::CsvPath>()
{
  return "custom_interfaces_anscer/srv/CsvPath";
}

template<>
struct has_fixed_size<custom_interfaces_anscer::srv::CsvPath>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_interfaces_anscer::srv::CsvPath_Request>::value &&
    has_fixed_size<custom_interfaces_anscer::srv::CsvPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_interfaces_anscer::srv::CsvPath>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_interfaces_anscer::srv::CsvPath_Request>::value &&
    has_bounded_size<custom_interfaces_anscer::srv::CsvPath_Response>::value
  >
{
};

template<>
struct is_service<custom_interfaces_anscer::srv::CsvPath>
  : std::true_type
{
};

template<>
struct is_service_request<custom_interfaces_anscer::srv::CsvPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_interfaces_anscer::srv::CsvPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__TRAITS_HPP_
