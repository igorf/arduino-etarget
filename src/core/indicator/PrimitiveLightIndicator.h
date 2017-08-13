#include "LightIndicatorInterface.h"

#ifndef PrimitiveLightIndicator_h
#define PrimitiveLightIndicator_h

class PrimitiveLightIndicator: public LightIndicatorInterface {
    
public:
    PrimitiveLightIndicator(bool doInit = false);
    void init();
    void green();
    void red();
    void off();
    void setBrightness(int brightness);
    String getName();
private:
    uint8_t pin;
};

#endif
