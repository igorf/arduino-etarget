#include "DigitalVibroDetector.h"
#include <Arduino.h>
#include <core/TargetCore.h>

DigitalVibroDetector::DigitalVibroDetector() {
    setDelay(800);
}

bool DigitalVibroDetector::detect() {
    int signal = digitalRead((uint8_t) pin);
    unsigned long ct = millis();

    if ((ct > this->time + this->delay) && signal) {
        this->time = ct;
        return true;
    }

    return false;
}