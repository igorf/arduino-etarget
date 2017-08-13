#include "core/indicator/factory/IndicatorFactory.h"
#include "core/detector/PiezoVibroDetector.h"
#include "TargetCore.h"

TargetCore* TargetCore::instance;

TargetCore::TargetCore() {
    shotDetector = new PiezoVibroDetector();
    communicator = new SerialPortCommunicator();
    communicator->init();
}

void TargetCore::setIndicator(LightIndicatorInterface* _indicator) {
    indicator = _indicator;
}

void TargetCore::setIndicator(String _indicator) {
    setIndicator(IndicatorFactory::getIndicator(_indicator));
}

void TargetCore::removeIndicator() {
    if (indicator != NULL) {
        delete indicator;
    }
}

void TargetCore::communicate() {
    if (communicator != NULL) {
        communicator->communicate();
    }
}

LightIndicatorInterface* TargetCore::getIndicator() {
    return indicator;
}

TargetCore* TargetCore::getInstance() {
    if (!instance) {
        instance = new TargetCore();
    }
    return instance;
}

unsigned long TargetCore::getStateChangedTime() {
    return stateChangedTimestamp;
}

String TargetCore::getState() {
    return state;
}

void TargetCore::setState(String state) {
    if (this->state != state) {
        stateChangedTimestamp = millis();
        this->state = state;
    }
}

void TargetCore::detectShot() {
    if (shotDetector->isEnabled() && shotDetector->detect()) {
        shotDetector->notify();
    }    
}

AbstractDetector* TargetCore::getShotDetector() {
    return this->shotDetector;
}

void TargetCore::reset() {
    // not implemented yet
}