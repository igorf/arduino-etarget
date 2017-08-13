#include <core/communicator/actions/CommunicatorAction.h>

#ifndef TARGETINDICATOR_SetShotDetectorDelayAction_H
#define TARGETINDICATOR_SetShotDetectorDelayAction_H

class SetShotDetectorDelayAction: public CommunicatorAction {
public:
    void run();
    bool match(String message);
private:
    int value = 0;
};

#endif //TARGETINDICATOR_GREENLIGHTACTION_H
