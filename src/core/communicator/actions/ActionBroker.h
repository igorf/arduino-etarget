#ifndef TARGETINDICATOR_ACTIONBROKER_H
#define TARGETINDICATOR_ACTIONBROKER_H

#include "CommunicatorAction.h"

class ActionBroker {
public:
    static CommunicatorAction* getActionByName(String command);
protected:
    static const CommunicatorAction* actions[];
};

#endif //TARGETINDICATOR_ACTIONBROKER_H
