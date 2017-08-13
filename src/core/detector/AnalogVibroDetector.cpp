#include "AnalogVibroDetector.h"
#include <Arduino.h>

AnalogVibroDetector::AnalogVibroDetector() {
    setSensibility(500);
    setDelay(500);
}

bool AnalogVibroDetector::detect() {
    unsigned long ct = millis();
    int signal = analogRead(pin);

    if (signal > threshold && signal > previousValue && (ct > this->time + this->delay)) {
        previousValue = signal;
        this->time = ct;
        return true;
    }

    /* DEBUG
    if (signal > 0) {
        String message = "Signal: " + String(signal);
        message += (" Prev: " + String(previousValue));
        message += (" threshold: " + String(threshold));
        Serial.print(message + "\n");
    }
     */

    previousValue = signal;
    return false;
}
