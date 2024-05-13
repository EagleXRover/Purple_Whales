// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_H_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AckermannMessage in the package ackermann_msgs.
typedef struct ackermann_msgs__msg__AckermannMessage
{
  float linear_velocity;
  float steering_angle;
} ackermann_msgs__msg__AckermannMessage;

// Struct for a sequence of ackermann_msgs__msg__AckermannMessage.
typedef struct ackermann_msgs__msg__AckermannMessage__Sequence
{
  ackermann_msgs__msg__AckermannMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ackermann_msgs__msg__AckermannMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_H_
