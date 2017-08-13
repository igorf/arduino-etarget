#include <WString.h>
#include "core/indicator/LightIndicatorInterface.h"
#include "core/communicator/SerialPortCommunicator.h"
#include "core/detector/AbstractDetector.h"

#ifndef TARGETINDICATOR_TARGETCORE_H
#define TARGETINDICATOR_TARGETCORE_H


class TargetCore {
public:
    void setIndicator(LightIndicatorInterface* _indicator);
    void setIndicator(String _indicator);
    void removeIndicator();
    void communicate();
    unsigned long getStateChangedTime();
    String getState();
    void setState(String state);
    void detectShot();

    LightIndicatorInterface* getIndicator();
    AbstractDetector* getShotDetector();
    static TargetCore* getInstance();

private:
    static TargetCore* instance;
    LightIndicatorInterface* indicator;
    SerialPortCommunicator* communicator;
    AbstractDetector* shotDetector;
    String state = "OFF";
    unsigned long stateChangedTimestamp = 0;
    TargetCore();
};


#endif //TARGETINDICATOR_TARGETCORE_H
