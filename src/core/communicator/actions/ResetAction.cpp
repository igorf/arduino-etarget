#include "ResetAction.h"
#include <core/TargetCore.h>

void ResetAction::run() {
    Serial.print("Target:reset");
    TargetCore::getInstance()->reset();
}