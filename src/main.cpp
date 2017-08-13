#include <Arduino.h>
#include "core/TargetCore.h"

TargetCore* core;

void setup() {
    core = TargetCore::getInstance();
}

void loop() {
    core->communicate();
    core->detectShot();
}