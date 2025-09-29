// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces_anscer:srv/CsvPath.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_H_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CsvPath in the package custom_interfaces_anscer.
typedef struct custom_interfaces_anscer__srv__CsvPath_Request
{
  rosidl_runtime_c__String filepath;
} custom_interfaces_anscer__srv__CsvPath_Request;

// Struct for a sequence of custom_interfaces_anscer__srv__CsvPath_Request.
typedef struct custom_interfaces_anscer__srv__CsvPath_Request__Sequence
{
  custom_interfaces_anscer__srv__CsvPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces_anscer__srv__CsvPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CsvPath in the package custom_interfaces_anscer.
typedef struct custom_interfaces_anscer__srv__CsvPath_Response
{
  bool success;
  rosidl_runtime_c__String message;
} custom_interfaces_anscer__srv__CsvPath_Response;

// Struct for a sequence of custom_interfaces_anscer__srv__CsvPath_Response.
typedef struct custom_interfaces_anscer__srv__CsvPath_Response__Sequence
{
  custom_interfaces_anscer__srv__CsvPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces_anscer__srv__CsvPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__STRUCT_H_
