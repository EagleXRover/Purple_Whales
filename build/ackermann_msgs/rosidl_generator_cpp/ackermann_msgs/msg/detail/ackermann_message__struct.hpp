// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_HPP_
#define ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ackermann_msgs__msg__AckermannMessage __attribute__((deprecated))
#else
# define DEPRECATED__ackermann_msgs__msg__AckermannMessage __declspec(deprecated)
#endif

namespace ackermann_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AckermannMessage_
{
  using Type = AckermannMessage_<ContainerAllocator>;

  explicit AckermannMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->steering_angle = 0.0f;
    }
  }

  explicit AckermannMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->steering_angle = 0.0f;
    }
  }

  // field types and members
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _steering_angle_type =
    float;
  _steering_angle_type steering_angle;

  // setters for named parameter idiom
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const float & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ackermann_msgs__msg__AckermannMessage
    std::shared_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ackermann_msgs__msg__AckermannMessage
    std::shared_ptr<ackermann_msgs::msg::AckermannMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AckermannMessage_ & other) const
  {
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const AckermannMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AckermannMessage_

// alias to use template instance with default allocator
using AckermannMessage =
  ackermann_msgs::msg::AckermannMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ackermann_msgs

#endif  // ACKERMANN_MSGS__MSG__DETAIL__ACKERMANN_MESSAGE__STRUCT_HPP_
