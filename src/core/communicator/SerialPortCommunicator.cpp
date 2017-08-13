#include <core/indicator/PrimitiveLightIndicator.h>
#include <core/communicator/actions/ActionBroker.h>
#include "SerialPortCommunicator.h"

SerialPortCommunicator::SerialPortCommunicator() {
    buffer = "";
}

void SerialPortCommunicator::init() {
    Serial.begin(9600);
}

void SerialPortCommunicator::read() {
    if (Serial.available() > 0) {
        int value = Serial.read();

        CommunicatorAction* action = ActionBroker::getActionByName(value);
        if (action) {
            action->run();
            if (action->getOutput() && action->getOutput() != "") {
                buffer = action->getOutput();
            }
        }
    }
}

void SerialPortCommunicator::sendMessage(String message) {
    buffer += message + "::" + (millis() - stateChangedTimestamp) + ">" + state + "\n";
}

void SerialPortCommunicator::write() {
    if (buffer.length() > 0) {
        Serial.print(buffer);
        buffer = "";
    }
}

void SerialPortCommunicator::communicate() {
    read();
    write();
}