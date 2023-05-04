#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#include "Arduino.h"
#include "peripherals/Peripheral.h"

/**
 * This is the possible temperature unit for 
 * the temperature sensor.
 * 
 * @author Arik Mendoza
*/
enum TemperatureUnit {
    CELSIUS,
    FARENHEIGHT
};

/**
 * A peripheral that calculates the temperature.
 * 
 * @author Arik Mendoza
*/
class TempSensor : public Peripheral {

    public:
        TempSensor(uint8_t pin);

        void setup();

        int getData();

        int getVoltage();

        int getTemperature(TemperatureUnit unit);
};

#endif 