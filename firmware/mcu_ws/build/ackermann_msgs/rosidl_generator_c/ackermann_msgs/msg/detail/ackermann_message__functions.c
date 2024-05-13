// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ackermann_msgs:msg/AckermannMessage.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/msg/detail/ackermann_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ackermann_msgs__msg__AckermannMessage__init(ackermann_msgs__msg__AckermannMessage * msg)
{
  if (!msg) {
    return false;
  }
  // linear_velocity
  // steering_angle
  return true;
}

void
ackermann_msgs__msg__AckermannMessage__fini(ackermann_msgs__msg__AckermannMessage * msg)
{
  if (!msg) {
    return;
  }
  // linear_velocity
  // steering_angle
}

bool
ackermann_msgs__msg__AckermannMessage__are_equal(const ackermann_msgs__msg__AckermannMessage * lhs, const ackermann_msgs__msg__AckermannMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  return true;
}

bool
ackermann_msgs__msg__AckermannMessage__copy(
  const ackermann_msgs__msg__AckermannMessage * input,
  ackermann_msgs__msg__AckermannMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // steering_angle
  output->steering_angle = input->steering_angle;
  return true;
}

ackermann_msgs__msg__AckermannMessage *
ackermann_msgs__msg__AckermannMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__msg__AckermannMessage * msg = (ackermann_msgs__msg__AckermannMessage *)allocator.allocate(sizeof(ackermann_msgs__msg__AckermannMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ackermann_msgs__msg__AckermannMessage));
  bool success = ackermann_msgs__msg__AckermannMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ackermann_msgs__msg__AckermannMessage__destroy(ackermann_msgs__msg__AckermannMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ackermann_msgs__msg__AckermannMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ackermann_msgs__msg__AckermannMessage__Sequence__init(ackermann_msgs__msg__AckermannMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__msg__AckermannMessage * data = NULL;

  if (size) {
    data = (ackermann_msgs__msg__AckermannMessage *)allocator.zero_allocate(size, sizeof(ackermann_msgs__msg__AckermannMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ackermann_msgs__msg__AckermannMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ackermann_msgs__msg__AckermannMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ackermann_msgs__msg__AckermannMessage__Sequence__fini(ackermann_msgs__msg__AckermannMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ackermann_msgs__msg__AckermannMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ackermann_msgs__msg__AckermannMessage__Sequence *
ackermann_msgs__msg__AckermannMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__msg__AckermannMessage__Sequence * array = (ackermann_msgs__msg__AckermannMessage__Sequence *)allocator.allocate(sizeof(ackermann_msgs__msg__AckermannMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ackermann_msgs__msg__AckermannMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ackermann_msgs__msg__AckermannMessage__Sequence__destroy(ackermann_msgs__msg__AckermannMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ackermann_msgs__msg__AckermannMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ackermann_msgs__msg__AckermannMessage__Sequence__are_equal(const ackermann_msgs__msg__AckermannMessage__Sequence * lhs, const ackermann_msgs__msg__AckermannMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ackermann_msgs__msg__AckermannMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ackermann_msgs__msg__AckermannMessage__Sequence__copy(
  const ackermann_msgs__msg__AckermannMessage__Sequence * input,
  ackermann_msgs__msg__AckermannMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ackermann_msgs__msg__AckermannMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ackermann_msgs__msg__AckermannMessage * data =
      (ackermann_msgs__msg__AckermannMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ackermann_msgs__msg__AckermannMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ackermann_msgs__msg__AckermannMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ackermann_msgs__msg__AckermannMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
