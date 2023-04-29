#include "BetterServo.h"

BetterServo::BetterServo(unsigned int pin) {
    this->pin = pin;
}

void BetterServo::setup() {
    pinMode(pin, OUTPUT);
    servo.attach(pin);
}

void BetterServo::rotate(unsigned int degrees) {
    servo.write(degrees);
}