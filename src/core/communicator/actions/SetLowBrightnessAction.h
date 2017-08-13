#ifndef TARGETINDICATOR_SETLOWBRIGHTNESSACTION_H
#define TARGETINDICATOR_SETLOWBRIGHTNESSACTION_H

#include "CommunicatorAction.h"

class SetLowBrightnessAction: public CommunicatorAction {
public:
    SetLowBrightnessAction(): CommunicatorAction() {
        alias = "l";
    }
    void run();
};


#endif //TARGETINDICATOR_SETLOWBRIGHTNESSACTION_H
