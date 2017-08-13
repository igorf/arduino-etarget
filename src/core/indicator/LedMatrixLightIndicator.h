#include "LedControlMS.h"
#include "LightIndicatorInterface.h"

#ifndef LedMatrixLightIndicator_h
#define LedMatrixLightIndicator_h

class LedMatrixLightIndicator: public LightIndicatorInterface {
    
public:
    LedMatrixLightIndicator(bool doInit = false);
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
