// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/detail/ackermann_message__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "ackermann_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "ackermann_msgs/msg/detail/ackermann_message__struct.h"
#include "ackermann_msgs/msg/detail/ackermann_message__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef ackermann_msgs__msg__AckermannMessage _AckermannMessage__ros_msg_type;

static bool _AckermannMessage__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }

  _AckermannMessage__ros_msg_type * ros_message = (_AckermannMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: linear_velocity
  rv = ucdr_serialize_float(cdr, ros_message->linear_velocity);
  // Member: steering_angle
  rv = ucdr_serialize_float(cdr, ros_message->steering_angle);

  return rv;
}

static bool _AckermannMessage__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    return false;
  }
  _AckermannMessage__ros_msg_type * ros_message = (_AckermannMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: linear_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->linear_velocity);
  // Field name: steering_angle
  rv = ucdr_deserialize_float(cdr, &ros_message->steering_angle);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_ackermann_msgs
size_t get_serialized_size_ackermann_msgs__msg__AckermannMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    return 0;
  }

  const _AckermannMessage__ros_msg_type * ros_message = (const _AckermannMessage__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: linear_velocity
  {
    const size_t item_size = sizeof(ros_message->linear_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: steering_angle
  {
    const size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AckermannMessage__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_ackermann_msgs__msg__AckermannMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_ackermann_msgs
size_t max_serialized_size_ackermann_msgs__msg__AckermannMessage(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: linear_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: steering_angle
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _AckermannMessage__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_ackermann_msgs__msg__AckermannMessage(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_AckermannMessage = {
  "ackermann_msgs::msg",
  "AckermannMessage",
  _AckermannMessage__cdr_serialize,
  _AckermannMessage__cdr_deserialize,
  _AckermannMessage__get_serialized_size,
  get_serialized_size_ackermann_msgs__msg__AckermannMessage,
  _AckermannMessage__max_serialized_size
};

static rosidl_message_type_support_t _AckermannMessage__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_AckermannMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, ackermann_msgs, msg, AckermannMessage)() {
  return &_AckermannMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
