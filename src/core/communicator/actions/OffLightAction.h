#ifndef TARGETINDICATOR_OFFLIGHTACTION_H
#define TARGETINDICATOR_OFFLIGHTACTION_H

#include "CommunicatorAction.h"

class OffLightAction: public CommunicatorAction {
public:
    OffLightAction(): CommunicatorAction() {
        alias = '0';
    }
    void run();
};

#endif //TARGETINDICATOR_OFFLIGHTACTION_H
