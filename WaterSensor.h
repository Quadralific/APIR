#ifndef WATER_SENSOR_H
#define WATER_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

enum WaterLevel {
    EMPTY,
    SMALL,
    MEDIUM,
    LARGE
};

class WaterSensor : public Peripheral{

    public:
        WaterSensor(unsigned int pin);

        void setup();

        int getValue();

        WaterLevel getWaterLevel();
};

#endif