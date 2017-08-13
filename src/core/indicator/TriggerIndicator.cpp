#include "TriggerIndicator.h"

TriggerIndicator::TriggerIndicator(bool doInit) {
    pinMode(redTrigger, OUTPUT);
    pinMode(greenTrigger, OUTPUT);
    if (doInit) {
        init();
    }
}

void TriggerIndicator::init() {
    off();
}

void TriggerIndicator::green() {
    digitalWrite(redTrigger, LOW);
    digitalWrite(greenTrigger, HIGH);
}

void TriggerIndicator::red() {
    digitalWrite(redTrigger, HIGH);
    digitalWrite(greenTrigger, LOW);
}

void TriggerIndicator::off() {
    digitalWrite(redTrigger, LOW);
    digitalWrite(greenTrigger, LOW);
}

void TriggerIndicator::setBrightness(int brightness) {
}

String TriggerIndicator::getName() {
    return "TRIGGER";
}