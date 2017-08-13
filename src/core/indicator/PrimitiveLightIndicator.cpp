#include "PrimitiveLightIndicator.h"

PrimitiveLightIndicator::PrimitiveLightIndicator(bool doInit) {
    if (doInit) {
        init();
    }
}

void PrimitiveLightIndicator::init() {
    pin = 13;
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

void PrimitiveLightIndicator::green() {
    digitalWrite(pin, HIGH);
}

void PrimitiveLightIndicator::red() {
    off();
}

void PrimitiveLightIndicator::off() {
    digitalWrite(pin, LOW);
}

void PrimitiveLightIndicator::setBrightness(int brightness) {
    //Nothing to do
}

String PrimitiveLightIndicator::getName() {
    return "PRIMITIVE";
}