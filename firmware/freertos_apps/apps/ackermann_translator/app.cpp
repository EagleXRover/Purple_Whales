#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <ackermann_msgs/msg/ackermann_message.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"

#include "car.h"

#include "constants.h"

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc); vTaskDelete(NULL);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

rcl_subscription_t subscriber;
ackermann_msgs__msg__AckermannMessage vel_msg;

Car car(CAR_CONSTANTS::WHEEL_RADIUS, CAR_CONSTANTS::GEAR_RATIO);

void vel_callback(const void * msgin);

extern "C" void appMain(void * argument) {
	car.enable();
	car.set_steering_angle(0);
	rcl_allocator_t allocator = rcl_get_default_allocator();
	rclc_support_t support;

	// create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// create node
	rcl_node_t node;
	RCCHECK(rclc_node_init_default(&node, "micro_ros_node", "", &support));

	// create subscriber
	RCCHECK(rclc_subscription_init_default(
		&subscriber,
		&node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(ackermann_msgs, msg, AckermannMessage),
		"/cmd_vel"));

	// Create executor
	rclc_executor_t executor;
	RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
	RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &vel_msg, &vel_callback, ON_NEW_DATA));

	while(1){
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(10));
		vTaskDelay(10);
	}

	// Free resources
	RCCHECK(rcl_subscription_fini(&subscriber, &node));
	RCCHECK(rcl_node_fini(&node));
}

void vel_callback(const void * msgin) {
	ackermann_msgs__msg__AckermannMessage * msg = (ackermann_msgs__msg__AckermannMessage *)msgin;
    car.set_linear_speed(msg->linear_velocity);
	car.set_steering_angle(msg->steering_angle);
}