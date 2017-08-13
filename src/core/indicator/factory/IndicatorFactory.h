#ifndef TARGETINDICATOR_INDICATORFACTORY_H
#define TARGETINDICATOR_INDICATORFACTORY_H


#include <core/indicator/LightIndicatorInterface.h>
#include <WString.h>

class IndicatorFactory {
public:
    static LightIndicatorInterface* getIndicator(String name);
};


#endif //TARGETINDICATOR_INDICATORFACTORY_H
