#include "LedMatrixLightIndicator.h"

LedMatrixLightIndicator::LedMatrixLightIndicator(bool doInit) {
    lc = new LedControl(12, 11, 10, 1);
    if (doInit) {
        init();
    }
}

void LedMatrixLightIndicator::init() {
    lc->shutdown(0, false);
    lc->setIntensity(0, 1);
    lc->clearDisplay(0);
}

void LedMatrixLightIndicator::green() {
    for (int i = 0; i < 8; i++) {
        lc->setRow(0, i, B11111111);
    }
}

void LedMatrixLightIndicator::red() {
    off();
}

void LedMatrixLightIndicator::off() {
    lc->clearDisplay(0);
}

void LedMatrixLightIndicator::setBrightness(int brightness) {
    int realBrightness = brightness / 16;
    lc->setIntensity(0, realBrightness);
}

String LedMatrixLightIndicator::getName() {
    return "SINGLE_MATRIX";
}