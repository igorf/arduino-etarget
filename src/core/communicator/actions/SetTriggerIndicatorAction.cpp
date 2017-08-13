#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "SetTriggerIndicatorAction.h"

void SetTriggerIndicatorAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator) {
        TargetCore::getInstance()->removeIndicator();
    }
    TargetCore::getInstance()->setIndicator("TRIGGER");
    output = "SET_INDICATOR:TRIGGER\n";
}