#ifndef TARGETINDICATOR_VIBRODETECTOR_H
#define TARGETINDICATOR_VIBRODETECTOR_H


#include "AbstractDetector.h"

class DigitalVibroDetector: public AbstractDetector {
public:
    bool detect();
    DigitalVibroDetector();

private:
    int pin = 6;
    unsigned long time = 0;
};


#endif //TARGETINDICATOR_VIBRODETECTOR_H
