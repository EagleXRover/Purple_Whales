// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ackermann_msgs/msg/detail/ackermann_message__rosidl_typesupport_introspection_c.h"
#include "ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ackermann_msgs/msg/detail/ackermann_message__functions.h"
#include "ackermann_msgs/msg/detail/ackermann_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ackermann_msgs__msg__AckermannMessage__init(message_memory);
}

void ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_fini_function(void * message_memory)
{
  ackermann_msgs__msg__AckermannMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_member_array[2] = {
  {
    "linear_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__msg__AckermannMessage, linear_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__msg__AckermannMessage, steering_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_members = {
  "ackermann_msgs__msg",  // message namespace
  "AckermannMessage",  // message name
  2,  // number of fields
  sizeof(ackermann_msgs__msg__AckermannMessage),
  ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_member_array,  // message members
  ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_type_support_handle = {
  0,
  &ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, msg, AckermannMessage)() {
  if (!ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_type_support_handle.typesupport_identifier) {
    ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ackermann_msgs__msg__AckermannMessage__rosidl_typesupport_introspection_c__AckermannMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
