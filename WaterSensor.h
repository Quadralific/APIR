#ifndef WATER_SENSOR_H
#define WATER_SENSOR_H

#include "Arduino.h"

enum WaterLevel {
    EMPTY,
    SMALL,
    MEDIUM,
    LARGE,
};

class WaterSensor {
    unsigned int pin;

    public:
        WaterSensor(unsigned int pin);

        void setup();
        int getValue();
        WaterLevel getLevel();

};

#endif