#ifndef TARGETINDICATOR_ABSTRACTDETECTOR_H
#define TARGETINDICATOR_ABSTRACTDETECTOR_H


class AbstractDetector {
public:
    virtual bool detect() = 0;
    void notify();
    void setSensibility(int sensibility);
    void setDelay(int delay);
    bool isEnabled();
    void setEnabled(int value);

protected:
    unsigned long time = 0;
    int threshold;
    int delay;
    bool enabled = false;
};


#endif //TARGETINDICATOR_ABSTRACTDETECTOR_H
