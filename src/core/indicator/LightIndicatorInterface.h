#ifndef LightIndicatorInterface_h
#define LightIndicatorInterface_h

#include <Arduino.h>
class LightIndicatorInterface {
    
public:
    virtual void init() = 0;
    virtual void green() = 0;
    virtual void red() = 0;
    virtual void off() = 0;
    virtual void setBrightness(int brightness) = 0;
    virtual String getName() = 0;
    virtual ~LightIndicatorInterface(){};
};

#endif
