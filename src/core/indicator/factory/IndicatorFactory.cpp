#include "IndicatorFactory.h"
#include <core/indicator/DoubleMatrixLightIndicator.h>
#include <core/indicator/LedMatrixLightIndicator.h>
#include <core/indicator/PrimitiveLightIndicator.h>
#include <core/indicator/TriggerIndicator.h>

LightIndicatorInterface* IndicatorFactory::getIndicator(String name) {
    if (name == "DOUBLE_MATRIX") {
        return new DoubleMatrixLightIndicator(true);
    }

    if (name == "SINGLE_MATRIX") {
        return new LedMatrixLightIndicator(true);
    }

    if (name == "PRIMITIVE") {
        return new PrimitiveLightIndicator(true);
    }

    if (name == "TRIGGER") {
        return new TriggerIndicator(true);
    }

    return NULL;
}