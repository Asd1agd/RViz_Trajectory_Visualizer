// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces_anscer:srv/CsvPath.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__FUNCTIONS_H_
#define CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces_anscer/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces_anscer/srv/detail/csv_path__struct.h"

/// Initialize srv/CsvPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces_anscer__srv__CsvPath_Request
 * )) before or use
 * custom_interfaces_anscer__srv__CsvPath_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__init(custom_interfaces_anscer__srv__CsvPath_Request * msg);

/// Finalize srv/CsvPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Request__fini(custom_interfaces_anscer__srv__CsvPath_Request * msg);

/// Create srv/CsvPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces_anscer__srv__CsvPath_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
custom_interfaces_anscer__srv__CsvPath_Request *
custom_interfaces_anscer__srv__CsvPath_Request__create();

/// Destroy srv/CsvPath message.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Request__destroy(custom_interfaces_anscer__srv__CsvPath_Request * msg);

/// Check for srv/CsvPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__are_equal(const custom_interfaces_anscer__srv__CsvPath_Request * lhs, const custom_interfaces_anscer__srv__CsvPath_Request * rhs);

/// Copy a srv/CsvPath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__copy(
  const custom_interfaces_anscer__srv__CsvPath_Request * input,
  custom_interfaces_anscer__srv__CsvPath_Request * output);

/// Initialize array of srv/CsvPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces_anscer__srv__CsvPath_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__init(custom_interfaces_anscer__srv__CsvPath_Request__Sequence * array, size_t size);

/// Finalize array of srv/CsvPath messages.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__fini(custom_interfaces_anscer__srv__CsvPath_Request__Sequence * array);

/// Create array of srv/CsvPath messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces_anscer__srv__CsvPath_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
custom_interfaces_anscer__srv__CsvPath_Request__Sequence *
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__create(size_t size);

/// Destroy array of srv/CsvPath messages.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__destroy(custom_interfaces_anscer__srv__CsvPath_Request__Sequence * array);

/// Check for srv/CsvPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__are_equal(const custom_interfaces_anscer__srv__CsvPath_Request__Sequence * lhs, const custom_interfaces_anscer__srv__CsvPath_Request__Sequence * rhs);

/// Copy an array of srv/CsvPath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Request__Sequence__copy(
  const custom_interfaces_anscer__srv__CsvPath_Request__Sequence * input,
  custom_interfaces_anscer__srv__CsvPath_Request__Sequence * output);

/// Initialize srv/CsvPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces_anscer__srv__CsvPath_Response
 * )) before or use
 * custom_interfaces_anscer__srv__CsvPath_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__init(custom_interfaces_anscer__srv__CsvPath_Response * msg);

/// Finalize srv/CsvPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Response__fini(custom_interfaces_anscer__srv__CsvPath_Response * msg);

/// Create srv/CsvPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces_anscer__srv__CsvPath_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
custom_interfaces_anscer__srv__CsvPath_Response *
custom_interfaces_anscer__srv__CsvPath_Response__create();

/// Destroy srv/CsvPath message.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Response__destroy(custom_interfaces_anscer__srv__CsvPath_Response * msg);

/// Check for srv/CsvPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__are_equal(const custom_interfaces_anscer__srv__CsvPath_Response * lhs, const custom_interfaces_anscer__srv__CsvPath_Response * rhs);

/// Copy a srv/CsvPath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__copy(
  const custom_interfaces_anscer__srv__CsvPath_Response * input,
  custom_interfaces_anscer__srv__CsvPath_Response * output);

/// Initialize array of srv/CsvPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces_anscer__srv__CsvPath_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__init(custom_interfaces_anscer__srv__CsvPath_Response__Sequence * array, size_t size);

/// Finalize array of srv/CsvPath messages.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__fini(custom_interfaces_anscer__srv__CsvPath_Response__Sequence * array);

/// Create array of srv/CsvPath messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces_anscer__srv__CsvPath_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
custom_interfaces_anscer__srv__CsvPath_Response__Sequence *
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__create(size_t size);

/// Destroy array of srv/CsvPath messages.
/**
 * It calls
 * custom_interfaces_anscer__srv__CsvPath_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
void
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__destroy(custom_interfaces_anscer__srv__CsvPath_Response__Sequence * array);

/// Check for srv/CsvPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__are_equal(const custom_interfaces_anscer__srv__CsvPath_Response__Sequence * lhs, const custom_interfaces_anscer__srv__CsvPath_Response__Sequence * rhs);

/// Copy an array of srv/CsvPath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces_anscer
bool
custom_interfaces_anscer__srv__CsvPath_Response__Sequence__copy(
  const custom_interfaces_anscer__srv__CsvPath_Response__Sequence * input,
  custom_interfaces_anscer__srv__CsvPath_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES_ANSCER__SRV__DETAIL__CSV_PATH__FUNCTIONS_H_
