#include "SetShotDetectorEnabledAction.h"
#include <core/TargetCore.h>

void SetShotDetectorEnabledAction::run() {
    TargetCore::getInstance()->getShotDetector()->setEnabled(value);
    output = "Shot detector enabled set to " + String(value) + "\n";
}

bool SetShotDetectorEnabledAction::match(String command) {
    if (command.startsWith("detector:enabled:")) {
        String copy = command;
        copy.remove(0, 17);
        value = copy.toInt();
        return true;
    }
    return false;            
}