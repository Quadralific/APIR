#ifndef SONIC_SENSOR_H
#define SONIC_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

/**
 * This is the possible measure unit for
 * the ultrasonic sensor.
 * 
 * @author Arik Mendoza
*/
enum MeasureUnit {
    CENTIMETER,
    INCH,
    METER
};

/**
 * A peripheral that calculates the distance.
 * 
 * @author Arik Mendoza
*/
class SonicSensor : public Peripheral {
    uint8_t echoPin;

    public:
        SonicSensor(uint8_t trigPin, uint8_t echoPin);

        void setup();

        int getEchoPin();

        int getData();

        int getEchoData();

        void begin();

        int getDistance(MeasureUnit unit);
};

#endif