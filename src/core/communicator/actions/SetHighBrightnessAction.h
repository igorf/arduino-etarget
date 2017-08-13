#ifndef TARGETINDICATOR_SETHIGHBRIGHTNESSACTION_H
#define TARGETINDICATOR_SETHIGHBRIGHTNESSACTION_H


#include "CommunicatorAction.h"

class SetHighBrightnessAction: public CommunicatorAction {
public:
    SetHighBrightnessAction(): CommunicatorAction() {
        alias = "h";
    }
    void run();
};


#endif //TARGETINDICATOR_SETHIGHBRIGHTNESSACTION_H
