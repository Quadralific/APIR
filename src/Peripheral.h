#ifndef PERIPHERAL_H
#define PERIPHERAL_H

#include "Arduino.h"

/**
 * Represents a input or output device that
 * can be connected to the Arduino.
 * 
 * @author Arik Mendoza
*/
class Peripheral {
    uint8_t pin;

    public:
        Peripheral(uint8_t pin);

        virtual ~Peripheral() = default;

        /**
         * This function setups the pin of the peripheral.
        */
        virtual void setup() = 0;

        /**
         * This function returns the data of the peripheral.
         * 
         * @return Returns the data of the peripheral.
        */
        virtual int getData() = 0;


        /**
         * This function returns the pin of the peripheral.
         * 
         * @return Returns the pin of the peripheral.
        */
        int getPin();
};

#endif