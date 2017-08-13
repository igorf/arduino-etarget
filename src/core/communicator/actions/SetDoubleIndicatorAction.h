#ifndef TARGETINDICATOR_SETDOUBLEINDICATORACTION_H
#define TARGETINDICATOR_SETDOUBLEINDICATORACTION_H


#include "CommunicatorAction.h"

class SetDoubleIndicatorAction: public CommunicatorAction {
public:
    SetDoubleIndicatorAction(): CommunicatorAction() {
        alias = "d";
    }
    void run();
};


#endif //TARGETINDICATOR_SETDOUBLEINDICATORACTION_H
