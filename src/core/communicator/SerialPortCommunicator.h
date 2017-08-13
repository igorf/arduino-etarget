#include <core/communicator/actions/CommunicatorAction.h>

#ifndef SerialPortCommunicator_h
#define SerialPortCommunicator_h

class SerialPortCommunicator {
  
public:
    SerialPortCommunicator();
    void init();
    void read();
    void communicate();

private:
    unsigned long stateChangedTimestamp;
    String buffer;
    String state;
};

#endif