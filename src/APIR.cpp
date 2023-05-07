#include "APIR.h"

void apir::delaySeconds(unsigned long seconds) {
    delay( (seconds * 1000) );
}

void apir::delayMinutes(unsigned long minutes) {
    delay( (minutes * 60000) );
}

void apir::pinsMode(const uint8_t* pins, const uint8_t* modes) {
    const int pinSize = sizeof(pins) / sizeof(uint8_t);
    const int modeSize = sizeof(modes) / sizeof(uint8_t);

    if(pinSize == modeSize) {
        for(int i = 0; i < pinSize; i++) {
            pinMode(pins[i], modes[i]);
        }
    } else {
        return;
    }
}