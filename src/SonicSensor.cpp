#include "SonicSensor.h"

SonicSensor::SonicSensor(uint8_t trigPin, uint8_t echoPin): Peripheral(trigPin), echoPin(echoPin) {}
 
void SonicSensor::setup() {
    pinMode(getPin(), OUTPUT);
    pinMode(this->echoPin, INPUT);
}

int SonicSensor::getEchoPin() {
    return this->echoPin;
}

int SonicSensor::getData() {
    return digitalRead(getPin());
}

int SonicSensor::getEchoData() {
    return pulseIn(this->echoPin, HIGH);
}

void SonicSensor::begin() {
    digitalWrite(getPin(), LOW);
    delayMicroseconds(2);
    digitalWrite(getPin(), HIGH);
    delayMicroseconds(10);
    digitalWrite(getPin(), LOW);
}

int SonicSensor::getDistance(MeasureUnit unit) {
    return (unit == CENTIMETER) ? ( (getEchoData() * 0.034) / 2) : 
           (unit == INCH) ? ( (getEchoData() * 0.0133) / 2) : ( (getEchoData() * 0.034) / 2) / 100; 
}