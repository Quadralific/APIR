#ifndef BETTER_SERVO_H
#define BETTER_SERVO_H

#define RIGHT 0
#define CENTER 90
#define LEFT 180

#include "Arduino.h"
#include "Servo.h"

class BetterServo {
    unsigned int pin;
    Servo servo;

    public:
        BetterServo(unsigned int pin);

        void setup();
        void rotate(unsigned int degrees);
};

#endif