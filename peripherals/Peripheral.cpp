#include "Peripheral.h"

Peripheral::Peripheral(uint8_t pin): pin(pin) {}

int Peripheral::getPin() {
    return this->pin;
}