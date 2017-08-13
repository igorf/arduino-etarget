#include <LedControlMS.h>
#include "LightIndicatorInterface.h"

#ifndef DoubleMatrixLightIndicator_h
#define DoubleMatrixLightIndicator_h

class DoubleMatrixLightIndicator: public LightIndicatorInterface {
    
public:
    DoubleMatrixLightIndicator(bool doInit = false);
    void init();
    void green();
    void red();
    void off();
    void setBrightness(int brightness);
    String getName();
private:
    LedControl *lc;
};


#endif
