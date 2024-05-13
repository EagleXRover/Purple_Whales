// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__TRAITS_HPP_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ackermann_msgs/msg/detail/ackermann_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ackermann_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AckermannMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: steering_angle
  {
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AckermannMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AckermannMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ackermann_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ackermann_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ackermann_msgs::msg::AckermannMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ackermann_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ackermann_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ackermann_msgs::msg::AckermannMessage & msg)
{
  return ackermann_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ackermann_msgs::msg::AckermannMessage>()
{
  return "ackermann_msgs::msg::AckermannMessage";
}

template<>
inline const char * name<ackermann_msgs::msg::AckermannMessage>()
{
  return "ackermann_msgs/msg/AckermannMessage";
}

template<>
struct has_fixed_size<ackermann_msgs::msg::AckermannMessage>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ackermann_msgs::msg::AckermannMessage>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ackermann_msgs::msg::AckermannMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__TRAITS_HPP_
