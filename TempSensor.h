#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#include "Peripheral.h"
#include "Arduino.h"

enum TemperatureUnit {
    CELCIUS,
    FAHRENHEIT
};

class TempSensor : public Peripheral {

    public:
        TempSensor(unsigned int pin);

        void setup();

        int getVoltage();

        int getTemperature(TemperatureUnit type);
};

#endif