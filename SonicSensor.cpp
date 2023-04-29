#include "SonicSensor.h"

SonicSensor::SonicSensor(unsigned int trigPin, unsigned int echoPin) {
    this->trigPin = trigPin;
    this->echoPin = echoPin;
}

void SonicSensor::setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void SonicSensor::begin() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
}

int SonicSensor::getDuration() {
    return pulseIn(echoPin, HIGH);
}

int SonicSensor::getDistance(MeasureType type) {
    return (type == CM) ? (getDuration() / 29) / 2 : ((getDuration() / 29) / 2) * 0.393701;
}