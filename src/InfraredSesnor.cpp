#include "InfraredSensor.h"

InfraredSensor::InfraredSensor(uint8_t pin): Peripheral(pin) {}

void InfraredSensor::setup() {
    pinMode(getPin(), INPUT);
}

int InfraredSensor::getData() {
    return digitalRead(getPin());
}