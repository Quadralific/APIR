#ifndef SONIC_SENSOR_H
#define SONIC_SENSOR_H

#include "Arduino.h"
#include "Peripheral.h"

enum MeasureType {
    CENTIMETERS,
    INCHES,
    METERS
};

class SonicSensor : public Peripheral {
    unsigned int echoPin;

    public:
        SonicSensor(unsigned int trigPin, unsigned echoPin);

        void setup();

        void begin();

        int getDuration();

        int getEchoPin();

        int getDistance(MeasureType type);
};

#endif