// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__FUNCTIONS_H_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ackermann_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ackermann_msgs/msg/detail/ackermann_message__struct.h"

/// Initialize msg/AckermannMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ackermann_msgs__msg__AckermannMessage
 * )) before or use
 * ackermann_msgs__msg__AckermannMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__init(ackermann_msgs__msg__AckermannMessage * msg);

/// Finalize msg/AckermannMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
void
ackermann_msgs__msg__AckermannMessage__fini(ackermann_msgs__msg__AckermannMessage * msg);

/// Create msg/AckermannMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ackermann_msgs__msg__AckermannMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
ackermann_msgs__msg__AckermannMessage *
ackermann_msgs__msg__AckermannMessage__create();

/// Destroy msg/AckermannMessage message.
/**
 * It calls
 * ackermann_msgs__msg__AckermannMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
void
ackermann_msgs__msg__AckermannMessage__destroy(ackermann_msgs__msg__AckermannMessage * msg);

/// Check for msg/AckermannMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__are_equal(const ackermann_msgs__msg__AckermannMessage * lhs, const ackermann_msgs__msg__AckermannMessage * rhs);

/// Copy a msg/AckermannMessage message.
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
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__copy(
  const ackermann_msgs__msg__AckermannMessage * input,
  ackermann_msgs__msg__AckermannMessage * output);

/// Initialize array of msg/AckermannMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * ackermann_msgs__msg__AckermannMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__Sequence__init(ackermann_msgs__msg__AckermannMessage__Sequence * array, size_t size);

/// Finalize array of msg/AckermannMessage messages.
/**
 * It calls
 * ackermann_msgs__msg__AckermannMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
void
ackermann_msgs__msg__AckermannMessage__Sequence__fini(ackermann_msgs__msg__AckermannMessage__Sequence * array);

/// Create array of msg/AckermannMessage messages.
/**
 * It allocates the memory for the array and calls
 * ackermann_msgs__msg__AckermannMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
ackermann_msgs__msg__AckermannMessage__Sequence *
ackermann_msgs__msg__AckermannMessage__Sequence__create(size_t size);

/// Destroy array of msg/AckermannMessage messages.
/**
 * It calls
 * ackermann_msgs__msg__AckermannMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
void
ackermann_msgs__msg__AckermannMessage__Sequence__destroy(ackermann_msgs__msg__AckermannMessage__Sequence * array);

/// Check for msg/AckermannMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__Sequence__are_equal(const ackermann_msgs__msg__AckermannMessage__Sequence * lhs, const ackermann_msgs__msg__AckermannMessage__Sequence * rhs);

/// Copy an array of msg/AckermannMessage messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ackermann_msgs
bool
ackermann_msgs__msg__AckermannMessage__Sequence__copy(
  const ackermann_msgs__msg__AckermannMessage__Sequence * input,
  ackermann_msgs__msg__AckermannMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__FUNCTIONS_H_
