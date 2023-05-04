#include "WaterSensor.h"

WaterSensor::WaterSensor(uint8_t pin): Peripheral(pin) {}

void WaterSensor::setup() {
    pinMode(getPin(), INPUT);
}

int WaterSensor::getData() {
    return analogRead(getPin());
}

WaterLevel WaterSensor::getWaterLevel() {
    return (getData() > 1 && getData() < 350) ? WaterLevel::SMALL : 
           (getData() > 350 && getData() < 510) ? WaterLevel::MEDIUM :
           (getData() > 510) ? WaterLevel::LARGE : WaterLevel::EMPTY;
}

const char* waterLevelToString(WaterLevel level) {
    return (level == SMALL) ? "SMALL" :
           (level == MEDIUM) ? "MEDIUM" :
           (level == LARGE) ? "LARGE" : "EMPTY";  
}