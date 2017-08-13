#include <WString.h>
#ifndef TARGETINDICATOR_COMMUNICATORACTION_H
#define TARGETINDICATOR_COMMUNICATORACTION_H


class CommunicatorAction {
public:
    String getAlias();
    String getOutput();
    CommunicatorAction();
    virtual bool match(String command);
    virtual void run() = 0;

protected:
    String alias;
    String output;
};


#endif //TARGETINDICATOR_COMMUNICATORACTION_H
