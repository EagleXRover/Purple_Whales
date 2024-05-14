#include "car.h"

Car::Car(float wheel_radius, float gear_ratio) {
    this->wheel_radius = wheel_radius;
    this->gear_ratio = gear_ratio;

    uart_config_t uart_config = {
            .baud_rate = RS232_CONSTANTS::BAUDRATE,
            .data_bits = UART_DATA_8_BITS,
            .parity = UART_PARITY_DISABLE,
            .stop_bits = UART_STOP_BITS_1,
    };
    uart_driver_install(UART_NUM_2, RS232_CONSTANTS::BUF_SIZE * 2, 0, 0, NULL, 0);
    uart_param_config(UART_NUM_2, &uart_config);
    uart_set_pin(UART_NUM_2, RS232_CONSTANTS::TX, RS232_CONSTANTS::RX, UART_PIN_NO_CHANGE, UART_PIN_NO_CHANGE);
}

void Car::set_linear_speed(float linear_speed) {
    int motor_angular_speed = (int)((linear_speed * this->gear_ratio * 60)/ (this->wheel_radius * 2 * 3.14159));
    char * motor_angular_speed_str = (char*)malloc(20);
    sprintf(motor_angular_speed_str, "V%d\n", motor_angular_speed);
    uart_write_bytes(UART_NUM_2, (const char*)motor_angular_speed_str, strlen(motor_angular_speed_str));
    free(motor_angular_speed_str);
}

void Car::set_steering_angle(float steering_angle) {
    // Set the steering angle of the car
}

void Car::enable(){
    uart_write_bytes(UART_NUM_2, (const char*)"EN\r\n\0", 5);
}