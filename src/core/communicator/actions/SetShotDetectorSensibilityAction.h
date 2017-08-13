#include <core/communicator/actions/CommunicatorAction.h>

#ifndef TARGETINDICATOR_SetShotDetectorSensibilityAction_H
#define TARGETINDICATOR_SetShotDetectorSensibilityAction_H

class SetShotDetectorSensibilityAction: public CommunicatorAction {
public:
    void run();
    bool match(String message);
private:
    int value = 0;
};

#endif //TARGETINDICATOR_GREENLIGHTACTION_H
