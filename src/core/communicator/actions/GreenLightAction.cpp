#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "GreenLightAction.h"

void GreenLightAction::run() {
    TargetCore::getInstance()->setState("GREEN");
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        indicator->green();
    }
}