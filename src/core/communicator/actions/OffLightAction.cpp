#include "OffLightAction.h"
#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>

void OffLightAction::run() {
    TargetCore::getInstance()->setState("OFF");
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        indicator->red();
    }
}