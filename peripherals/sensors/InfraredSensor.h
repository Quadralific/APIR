#ifndef INFRARED_SENSOR_H
#define INFRARED_SENSOR_H

#include "Arduino.h"
#include "peripherals/Peripheral.h"

/**
 * A peripheral that detects IR (Infrared Radition).
 * 
 * @author Arik Mendoza
*/
class InfraredSensor: public Peripheral {

    public:
        InfraredSensor(uint8_t pin);

        void setup();

        int getData();
};

#endif