#include "CommunicatorAction.h"

CommunicatorAction::CommunicatorAction() {
    output = "";
}

String CommunicatorAction::getAlias() {
    return alias;
}

String CommunicatorAction::getOutput() {
    return output;
}

bool CommunicatorAction::match(String command) {
    return alias == command;
}