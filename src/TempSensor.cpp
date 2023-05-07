#include "TempSensor.h"

TempSensor::TempSensor(uint8_t pin): Peripheral(pin) {}

void TempSensor::setup() {
    pinMode(getPin(), INPUT);
}

int TempSensor::getData() {
    return analogRead(getPin());
}

int TempSensor::getVoltage() {
    return getData() / 1023.0 * 5.0 * 1000;
}

int TempSensor::getTemperature(TemperatureUnit unit) {
    return (unit == CELSIUS) ? (getVoltage() - 500) / 10 : (( (getVoltage() - 500) / 10 ) * 1.8) + 32;
}