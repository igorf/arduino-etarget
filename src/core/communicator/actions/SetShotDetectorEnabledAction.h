#include <core/communicator/actions/CommunicatorAction.h>

#ifndef TARGETINDICATOR_SetShotDetectorEnabledAction_H
#define TARGETINDICATOR_SetShotDetectorEnabledAction_H

class SetShotDetectorEnabledAction: public CommunicatorAction {
public:
    void run();
    bool match(String message);
private:
    int value = 0;
};

#endif //TARGETINDICATOR_GREENLIGHTACTION_H
