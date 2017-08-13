#ifndef TARGETINDICATOR_SETTRIGGERINDICATORACTION_H
#define TARGETINDICATOR_SETTRIGGERINDICATORACTION_H


#include "CommunicatorAction.h"

class SetTriggerIndicatorAction: public CommunicatorAction {
public:
    SetTriggerIndicatorAction(): CommunicatorAction() {
        alias = 't';
    }
    void run();
};


#endif //TARGETINDICATOR_SETTRIGGERINDICATORACTION_H
