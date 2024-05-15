#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/mcpwm.h"

#include <cstring>

#include "constants.h"

class Car {
    public:
        Car(float wheel_radius, float gear_ratio);
        void set_linear_speed(float linear_speed);
        void set_steering_angle(float steering_angle);
        void enable();
        uint32_t get_servo_pulse_width(int degrees);
    private:
        float wheel_radius;
        float gear_ratio;
};