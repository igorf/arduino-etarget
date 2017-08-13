#include <core/communicator/actions/CommunicatorAction.h>

#ifndef TARGETINDICATOR_ResetAction_H
#define TARGETINDICATOR_ResetAction_H

class ResetAction: public CommunicatorAction {
public:
    ResetAction(): CommunicatorAction() {
        alias = "reset";
    } 
    void run();
private:
    int value = 0;
};

#endif //TARGETINDICATOR_GREENLIGHTACTION_H
