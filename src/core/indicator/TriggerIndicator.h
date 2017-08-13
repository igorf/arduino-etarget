#include "LightIndicatorInterface.h"

#ifndef TriggerIndicator_h
#define TriggerIndicator_h

class TriggerIndicator: public LightIndicatorInterface {
    
public:
    TriggerIndicator(bool doInit = false);
    void init();
    void green();
    void red();
    void off();
    void setBrightness(int brightness);
    String getName();
private:
    int redTrigger = 8;
    int greenTrigger = 9;
};

#endif
