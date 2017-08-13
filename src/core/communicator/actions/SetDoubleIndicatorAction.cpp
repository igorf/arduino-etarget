#include <core/indicator/LightIndicatorInterface.h>
#include <core/TargetCore.h>
#include "SetDoubleIndicatorAction.h"

void SetDoubleIndicatorAction::run() {
    LightIndicatorInterface* indicator = TargetCore::getInstance()->getIndicator();
    if (indicator != NULL) {
        if (indicator->getName().equals("DOUBLE_MATRIX")) {
            output = "indicator is already DOUBLE_MATRIX\n";
            return;
        }
        TargetCore::getInstance()->removeIndicator();
    }
    TargetCore::getInstance()->setIndicator("DOUBLE_MATRIX");
    output = "SET_INDICATOR:DOUBLE_MATRIX\n";
}