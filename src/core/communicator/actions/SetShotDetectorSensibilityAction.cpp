#include "SetShotDetectorSensibilityAction.h"
#include <core/TargetCore.h>

void SetShotDetectorSensibilityAction::run() {
    TargetCore::getInstance()->getShotDetector()->setSensibility(value);
    output = "Shot detector sensibility set to " + String(value) + "\n";
}

bool SetShotDetectorSensibilityAction::match(String command) {
    if (command.startsWith("detector:sensibility:")) {
        String copy = command;
        copy.remove(0, 21);
        int level = copy.toInt();
        if (level > 0) {
            value = level;
            return true;
        }
    }
    return false;            
}