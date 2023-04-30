#include "Peripheral.h"

Peripheral::Peripheral(unsigned int pin): pin(pin) {}

int Peripheral::getPin() {
    return this->pin;
}

