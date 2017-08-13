#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "SetSingleIndicatorAction.h"

void SetSingleIndicatorAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator) {
        TargetCore::getInstance()->removeIndicator();
    }
    TargetCore::getInstance()->setIndicator("SINGLE_MATRIX");
    output = "SET_INDICATOR:SINGLE_MATRIX\n";
}