#ifndef BETTER_SERVO_H
#define BETTER_SERVO_H

#define RIGHT 0
#define CENTER 90
#define LEFT 180

#include "Arduino.h"
#include "Servo.h"
#include "Peripheral.h"

class BetterServo : public Peripheral {
    Servo servo;

    public:
        BetterServo(unsigned int pin);

        void setup();

        int getCurrentAngle();

        void rotate(int degrees);
};

#endif