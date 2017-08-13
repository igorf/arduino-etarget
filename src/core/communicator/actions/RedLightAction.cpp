#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "RedLightAction.h"

void RedLightAction::run() {
    TargetCore::getInstance()->setState("RED");
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        indicator->red();
    }
}