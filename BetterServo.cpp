#include "BetterServo.h"

BetterServo::BetterServo(unsigned int pin): Peripheral(pin) {}

void BetterServo::setup() {
    pinMode(getPin(), OUTPUT);
    servo.attach(getPin());
}

int BetterServo::getCurrentAngle() {
    return servo.read();
}

void BetterServo::rotate(int degrees) {
    servo.write(degrees);
}