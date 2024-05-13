// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/detail/ackermann_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ackermann_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ackermann_msgs/msg/detail/ackermann_message__struct.h"
#include "ackermann_msgs/msg/detail/ackermann_message__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _AckermannMessage__ros_msg_type = ackermann_msgs__msg__AckermannMessage;

static bool _AckermannMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AckermannMessage__ros_msg_type * ros_message = static_cast<const _AckermannMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_velocity
  {
    cdr << ros_message->linear_velocity;
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  return true;
}

static bool _AckermannMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AckermannMessage__ros_msg_type * ros_message = static_cast<_AckermannMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_velocity
  {
    cdr >> ros_message->linear_velocity;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t get_serialized_size_ackermann_msgs__msg__AckermannMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AckermannMessage__ros_msg_type * ros_message = static_cast<const _AckermannMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear_velocity
  {
    size_t item_size = sizeof(ros_message->linear_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AckermannMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ackermann_msgs__msg__AckermannMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ackermann_msgs
size_t max_serialized_size_ackermann_msgs__msg__AckermannMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: linear_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ackermann_msgs__msg__AckermannMessage;
    is_plain =
      (
      offsetof(DataType, steering_angle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AckermannMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ackermann_msgs__msg__AckermannMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AckermannMessage = {
  "ackermann_msgs::msg",
  "AckermannMessage",
  _AckermannMessage__cdr_serialize,
  _AckermannMessage__cdr_deserialize,
  _AckermannMessage__get_serialized_size,
  _AckermannMessage__max_serialized_size
};

static rosidl_message_type_support_t _AckermannMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AckermannMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ackermann_msgs, msg, AckermannMessage)() {
  return &_AckermannMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
