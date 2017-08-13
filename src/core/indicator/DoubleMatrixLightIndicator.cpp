#include "DoubleMatrixLightIndicator.h"

DoubleMatrixLightIndicator::DoubleMatrixLightIndicator(bool doInit) {
    lc = new LedControl(12, 11, 10, 2);
    if (doInit) {
        init();
    }
}

void DoubleMatrixLightIndicator::init() {
    lc->shutdown(0, false);
    lc->shutdown(1, false);
    lc->setIntensity(0, 1);
    lc->setIntensity(1, 1);
    lc->clearDisplay(0);
    lc->clearDisplay(1);
}

void DoubleMatrixLightIndicator::green() {
    for (int i = 0; i < 8; i++) {
        lc->setRow(1, i, B11111111);
    }
    for (int i = 0; i < 8; i++) {
        lc->setRow(0, i, B00000000);
    }
}

void DoubleMatrixLightIndicator::red() {
    for (int i = 0; i < 8; i++) {
        lc->setRow(0, i, B11111111);
    }
    for (int i = 0; i < 8; i++) {
        lc->setRow(1, i, B00000000);
    }
}

void DoubleMatrixLightIndicator::off() {
    lc->clearDisplay(0);
    lc->clearDisplay(1);
}

void DoubleMatrixLightIndicator::setBrightness(int brightness) {
    int realBrightness = brightness / 16;
    lc->setIntensity(0, realBrightness);
    lc->setIntensity(1, realBrightness);
}

String DoubleMatrixLightIndicator::getName() {
    return "DOUBLE_MATRIX";
}