#ifndef TARGETINDICATOR_SETPRIMITIVEINDICATORACTION_H
#define TARGETINDICATOR_SETPRIMITIVEINDICATORACTION_H


#include "CommunicatorAction.h"

class SetPrimitiveIndicatorAction: public CommunicatorAction {
public:
    SetPrimitiveIndicatorAction(): CommunicatorAction() {
        alias = "p";
    }
    void run();
};


#endif //TARGETINDICATOR_SETPRIMITIVEINDICATORACTION_H
