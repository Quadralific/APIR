#include "WaterSensor.h"

WaterSensor::WaterSensor(unsigned int pin) {
    this->pin = pin;
}

void WaterSensor::setup() {
    pinMode(pin, INPUT);
}

int WaterSensor::getValue() {
    return analogRead(pin);
}

WaterLevel WaterSensor::getLevel() {
    return (getValue() == 0) ? WaterLevel::EMPTY : 
           (getValue() > 1 && getValue() < 350) ? WaterLevel::SMALL : 
           (getValue() > 350 && getValue() < 510) ? WaterLevel::MEDIUM :
           (getValue() > 510) ? WaterLevel::LARGE : WaterLevel::EMPTY;
}