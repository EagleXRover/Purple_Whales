// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ackermann_msgs/msg/detail/ackermann_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ackermann_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AckermannMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ackermann_msgs::msg::AckermannMessage(_init);
}

void AckermannMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ackermann_msgs::msg::AckermannMessage *>(message_memory);
  typed_message->~AckermannMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AckermannMessage_message_member_array[2] = {
  {
    "linear_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs::msg::AckermannMessage, linear_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "steering_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs::msg::AckermannMessage, steering_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AckermannMessage_message_members = {
  "ackermann_msgs::msg",  // message namespace
  "AckermannMessage",  // message name
  2,  // number of fields
  sizeof(ackermann_msgs::msg::AckermannMessage),
  AckermannMessage_message_member_array,  // message members
  AckermannMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AckermannMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AckermannMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AckermannMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ackermann_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ackermann_msgs::msg::AckermannMessage>()
{
  return &::ackermann_msgs::msg::rosidl_typesupport_introspection_cpp::AckermannMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ackermann_msgs, msg, AckermannMessage)() {
  return &::ackermann_msgs::msg::rosidl_typesupport_introspection_cpp::AckermannMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
