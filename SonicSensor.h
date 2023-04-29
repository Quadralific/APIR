#ifndef SONIC_SENSOR_H
#define SONIC_SENSOR_H

#include "Arduino.h"

/**
 * This is the possible measuring types for the sonic sensor
 * that I provided.
*/
enum MeasureType {
    CM,
    INCHES
};

/**
 * Represents a sonic sensor.
*/
class SonicSensor {
    // The pins for the TRIG and ECHO.
    unsigned int trigPin, echoPin;

    public:
        SonicSensor(unsigned int trigPin, unsigned int echoPin);

        void setup();
        void begin();
        int getDuration();
        int getDistance(MeasureType type);
};

#endif