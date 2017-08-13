#include "ActionBroker.h"
#include "GreenLightAction.h"
#include "RedLightAction.h"
#include "OffLightAction.h"
#include "InitCompleteAction.h"
#include "SetPrimitiveIndicatorAction.h"
#include "SetSingleIndicatorAction.h"
#include "SetDoubleIndicatorAction.h"
#include "SetTriggerIndicatorAction.h"
#include "SetHighBrightnessAction.h"
#include "SetLowBrightnessAction.h"

const CommunicatorAction* ActionBroker::actions[] = {
        new GreenLightAction(),
        new RedLightAction(),
        new OffLightAction(),
        new InitCompleteAction(),
        new SetPrimitiveIndicatorAction(),
        new SetSingleIndicatorAction(),
        new SetDoubleIndicatorAction(),
        new SetTriggerIndicatorAction(),
        new SetHighBrightnessAction(),
        new SetLowBrightnessAction()
};

CommunicatorAction* ActionBroker::getActionByName(String command) {
    for (int i = 0; i < ACTIONS; i++) {
        CommunicatorAction* action = (CommunicatorAction *) actions[i];
        if (action->match(command)) {
            return action;
        }
    }
    return NULL;
}
