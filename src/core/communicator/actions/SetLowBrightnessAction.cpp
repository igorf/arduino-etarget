#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "SetLowBrightnessAction.h"

void SetLowBrightnessAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        indicator->setBrightness(20);
    }
}