#include "SetShotDetectorDelayAction.h"
#include <core/TargetCore.h>

void SetShotDetectorDelayAction::run() {
    TargetCore::getInstance()->getShotDetector()->setDelay(value);
    output = "Shot detector delay set to " + String(value) + "\n";
}

bool SetShotDetectorDelayAction::match(String command) {
    if (command.startsWith("detector:delay:1000")) {
        String copy = command;
        copy.remove(0, 15);
        int level = copy.toInt();
        if (level > 0) {
            value = level;
            return true;
        }
    }
    return false;            
}