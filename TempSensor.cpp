#include "TempSensor.h"

void TempSensor::setup() {
    pinMode(getPin(), INPUT);
}

int TempSensor::getVoltage() {
    return analogRead(getPin()) / 1023.0 * 5.0 * 1000;
}

int TempSensor::getTemperature(TemperatureUnit type) {
    return (type == CELCIUS) ? (getVoltage() - 500) / 10 : (((getVoltage() - 500) / 10) * 1.8) + 32;
}