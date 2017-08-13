#include <core/indicator/PrimitiveLightIndicator.h>
#include <core/communicator/actions/ActionBroker.h>
#include "SerialPortCommunicator.h"

SerialPortCommunicator::SerialPortCommunicator() {
    buffer = "";
}

void SerialPortCommunicator::init() {
    Serial.begin(9600);
    Serial.setTimeout(20);
}

void SerialPortCommunicator::read() {
    String message = Serial.readStringUntil('\n');
    message.trim();
    Serial.print("[" + message + "]\n");
    CommunicatorAction* action = ActionBroker::getActionByName(message);
    if (action) {
        action->run();
        if (action->getOutput() && action->getOutput() != "") {
            Serial.print(action->getOutput());
        }
    }
}

void SerialPortCommunicator::communicate() {
    read();
}