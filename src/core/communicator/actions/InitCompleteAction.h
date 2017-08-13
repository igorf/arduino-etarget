#ifndef TARGETINDICATOR_INITCOMPLETEACTION_H
#define TARGETINDICATOR_INITCOMPLETEACTION_H

#include "CommunicatorAction.h"

class InitCompleteAction: public CommunicatorAction {
public:
    InitCompleteAction(): CommunicatorAction() {
        alias = 'i';
    }
    void run();
};

#endif //TARGETINDICATOR_INITCOMPLETEACTION_H
