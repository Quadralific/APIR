#ifndef WATER_SENSOR_H
#define WATER_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

/**
 * This is the possible types of water level for
 * the water sensor.
 * 
 * @author Arik Mendoza
*/
enum WaterLevel {
    EMPTY,
    SMALL,
    MEDIUM,
    LARGE
};

/**
 * A peripheral that senses water.
 * 
 * @author Arik Mendoza
*/
class WaterSensor : public Peripheral {

    public:
        WaterSensor(uint8_t pin);

        void setup();

        int getData();

        WaterLevel getWaterLevel();
};

const char* waterLevelToString(WaterLevel level);

#endif