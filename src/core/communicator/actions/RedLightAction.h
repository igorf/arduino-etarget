#ifndef TARGETINDICATOR_REDLIGHTACTION_H
#define TARGETINDICATOR_REDLIGHTACTION_H


#include "CommunicatorAction.h"

class RedLightAction: public CommunicatorAction {
public:
    RedLightAction(): CommunicatorAction() {
        alias = '2';
    }
    void run();
};

#endif //TARGETINDICATOR_REDLIGHTACTION_H
