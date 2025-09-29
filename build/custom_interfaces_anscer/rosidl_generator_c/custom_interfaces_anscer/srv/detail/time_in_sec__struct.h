// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces_anscer:srv/TimeInSec.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__STRUCT_H_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TimeInSec in the package custom_interfaces_anscer.
typedef struct custom_interfaces_anscer__srv__TimeInSec_Request
{
  int32_t time_sec;
} custom_interfaces_anscer__srv__TimeInSec_Request;

// Struct for a sequence of custom_interfaces_anscer__srv__TimeInSec_Request.
typedef struct custom_interfaces_anscer__srv__TimeInSec_Request__Sequence
{
  custom_interfaces_anscer__srv__TimeInSec_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces_anscer__srv__TimeInSec_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TimeInSec in the package custom_interfaces_anscer.
typedef struct custom_interfaces_anscer__srv__TimeInSec_Response
{
  bool success;
  rosidl_runtime_c__String message;
} custom_interfaces_anscer__srv__TimeInSec_Response;

// Struct for a sequence of custom_interfaces_anscer__srv__TimeInSec_Response.
typedef struct custom_interfaces_anscer__srv__TimeInSec_Response__Sequence
{
  custom_interfaces_anscer__srv__TimeInSec_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces_anscer__srv__TimeInSec_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__TIME_IN_SEC__STRUCT_H_
