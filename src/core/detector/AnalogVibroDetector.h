#ifndef TARGETINDICATOR_ANALOGVIBRODETECTOR_H
#define TARGETINDICATOR_ANALOGVIBRODETECTOR_H


#include "AbstractDetector.h"

class AnalogVibroDetector: public AbstractDetector {
public:
    bool detect();
    AnalogVibroDetector();
private:
    unsigned int pin = 3;
    int previousValue = 0;
};


#endif //TARGETINDICATOR_ANALOGVIBRODETECTOR_H
