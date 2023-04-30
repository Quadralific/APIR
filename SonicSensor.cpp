#include "SonicSensor.h"

SonicSensor::SonicSensor(unsigned int trigPin, unsigned echoPin) : Peripheral(trigPin), echoPin(echoPin) {}

void SonicSensor::setup() {
    pinMode(getPin(), OUTPUT);
    pinMode(echoPin, INPUT);
}

void SonicSensor::begin() {
    digitalWrite(getPin(), LOW);
    delayMicroseconds(2);
    digitalWrite(getPin(), HIGH);
    delayMicroseconds(10);
    digitalWrite(getPin(), LOW);
}

int SonicSensor::getDuration() {
    return pulseIn(echoPin, HIGH);
}

int SonicSensor::getEchoPin() {
    return echoPin;
}

int SonicSensor::getDistance(MeasureType type) {
    return (type == CENTIMETERS) ? (getDuration() / 29) / 2 : 
           (type == INCHES) ? ((getDuration() / 29) / 2) * 0.393701 : ((getDuration() / 29) / 2) * 0.01;
}