#ifndef TARGETINDICATOR_SETSINGLEINDICATORACTION_H
#define TARGETINDICATOR_SETSINGLEINDICATORACTION_H


#include "CommunicatorAction.h"

class SetSingleIndicatorAction: public CommunicatorAction {
public:
    SetSingleIndicatorAction(): CommunicatorAction() {
        alias = "s";
    }
    void run();
};


#endif //TARGETINDICATOR_SETSINGLEINDICATORACTION_H
