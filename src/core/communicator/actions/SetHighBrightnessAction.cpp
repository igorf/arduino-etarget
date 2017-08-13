#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "SetHighBrightnessAction.h"

void SetHighBrightnessAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        indicator->setBrightness(90);
    }
    output = "Brightness set to HIGH\n";    
}