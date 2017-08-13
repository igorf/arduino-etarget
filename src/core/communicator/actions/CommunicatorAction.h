#include <WString.h>
#ifndef TARGETINDICATOR_COMMUNICATORACTION_H
#define TARGETINDICATOR_COMMUNICATORACTION_H


class CommunicatorAction {
public:
    int getAlias();
    String getOutput();
    CommunicatorAction();
    virtual void run() = 0;

protected:
    int alias;
    String output;
};


#endif //TARGETINDICATOR_COMMUNICATORACTION_H
