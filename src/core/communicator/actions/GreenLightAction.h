#include <core/communicator/actions/CommunicatorAction.h>

#ifndef TARGETINDICATOR_GREENLIGHTACTION_H
#define TARGETINDICATOR_GREENLIGHTACTION_H

class GreenLightAction: public CommunicatorAction {
public:
    GreenLightAction(): CommunicatorAction() {
        alias = "1";
    }
    void run();
};

#endif //TARGETINDICATOR_GREENLIGHTACTION_H
