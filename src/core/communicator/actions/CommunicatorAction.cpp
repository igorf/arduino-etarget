#include "CommunicatorAction.h"

CommunicatorAction::CommunicatorAction() {
    output = "";
}

int CommunicatorAction::getAlias() {
    return alias;
}

String CommunicatorAction::getOutput() {
    return output;
}