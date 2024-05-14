#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include <cstring>
#include "constants.h"

class Car {
    public:
        Car(float wheel_radius, float gear_ratio);
        void set_linear_speed(float linear_speed);
        void set_steering_angle(float steering_angle);
        void enable();
    private:
        float wheel_radius;
        float gear_ratio;
};