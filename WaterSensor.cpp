#include "WaterSensor.h"

WaterSensor::WaterSensor(unsigned int pin): Peripheral(pin) {}

void WaterSensor::setup() {
    pinMode(getPin(), INPUT);
}

int WaterSensor::getValue() {
    return analogRead(getPin());
}

WaterLevel WaterSensor::getWaterLevel() {
    return (getValue() == 0) ? WaterLevel::EMPTY : 
           (getValue() > 1 && getValue() < 350) ? WaterLevel::SMALL : 
           (getValue() > 350 && getValue() < 510) ? WaterLevel::MEDIUM :
           (getValue() > 510) ? WaterLevel::LARGE : WaterLevel::EMPTY;
}