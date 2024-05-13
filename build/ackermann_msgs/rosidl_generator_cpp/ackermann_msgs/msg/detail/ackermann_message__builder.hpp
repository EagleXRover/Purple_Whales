// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__BUILDER_HPP_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ackermann_msgs/msg/detail/ackermann_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ackermann_msgs
{

namespace msg
{

namespace builder
{

class Init_AckermannMessage_steering_angle
{
public:
  explicit Init_AckermannMessage_steering_angle(::ackermann_msgs::msg::AckermannMessage & msg)
  : msg_(msg)
  {}
  ::ackermann_msgs::msg::AckermannMessage steering_angle(::ackermann_msgs::msg::AckermannMessage::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ackermann_msgs::msg::AckermannMessage msg_;
};

class Init_AckermannMessage_linear_velocity
{
public:
  Init_AckermannMessage_linear_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AckermannMessage_steering_angle linear_velocity(::ackermann_msgs::msg::AckermannMessage::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_AckermannMessage_steering_angle(msg_);
  }

private:
  ::ackermann_msgs::msg::AckermannMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ackermann_msgs::msg::AckermannMessage>()
{
  return ackermann_msgs::msg::builder::Init_AckermannMessage_linear_velocity();
}

}  // namespace ackermann_msgs

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__BUILDER_HPP_
