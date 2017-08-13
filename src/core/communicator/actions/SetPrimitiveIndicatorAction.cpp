#include <core/TargetCore.h>
#include "SetPrimitiveIndicatorAction.h"

void SetPrimitiveIndicatorAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator) {
        TargetCore::getInstance()->removeIndicator();
    }
    TargetCore::getInstance()->setIndicator("PRIMITIVE");
    output = "SET_INDICATOR:PRIMITIVE\n";
}