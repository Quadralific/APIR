#ifndef APIR_H
#define APIR_H

#include "Arduino.h"

/**
 * A utility library that has a lot
 * of useful functions.
 * 
 * @author Arik Mendoza
*/
namespace apir {
    
    void delaySeconds(unsigned long seconds);
    void delayMinutes(unsigned long minutes);
    void pinsMode(const uint8_t* pins, const uint8_t* modes);
}

#endif