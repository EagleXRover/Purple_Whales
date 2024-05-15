#ifndef CONSTANTS_H
    #define CONSTANTS_H

    namespace CAR_CONSTANTS {
        const float WHEEL_RADIUS        = 0.0325;
        const float GEAR_RATIO          = 5.84;
        const int SERVO_OFFSET          = 70;
        const int SERVO_PIN             = 23;
        const int SERVO_MIN_PULSEWIDTH  = 1000;
        const int SERVO_MAX_PULSEWIDTH  = 2000;
        const int MAX_THRESHOLD         = 60;
    }

    namespace RS232_CONSTANTS {
        const int BAUDRATE = 9600;
        const int BUF_SIZE = 128;
        const int TX       = 18;
        const int RX       = 19;
    }
#endif