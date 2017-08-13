#include <HardwareSerial.h>
#include <core/TargetCore.h>
#include "AbstractDetector.h"

void AbstractDetector::notify() {
    String state = TargetCore::getInstance()->getState();
    unsigned long eventTime = millis();
    unsigned long offset = (eventTime - TargetCore::getInstance()->getStateChangedTime());

    String message = "SHOOT:" + state + ":" + offset + "\n";
    Serial.print(message);
}

void AbstractDetector::setDelay(int delay) {
    this->delay = delay;
}

void AbstractDetector::setSensibility(int sensibility) {
    this->threshold = sensibility;
}

bool AbstractDetector::isEnabled() {
    return this->enabled;
}

void AbstractDetector::setEnabled(int value) {
    if (value > 0) {
        this->enabled = true;
    } else if (value == 0) {
        this->enabled = false;
    }
}