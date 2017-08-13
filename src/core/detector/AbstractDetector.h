#ifndef TARGETINDICATOR_ABSTRACTDETECTOR_H
#define TARGETINDICATOR_ABSTRACTDETECTOR_H


class AbstractDetector {
public:
    virtual bool detect() = 0;
    void notify();
    void setSensibility(int sensibility);
    void setDelay(int delay);

protected:
    unsigned long time = 0;
    int threshold;
    int delay;
};


#endif //TARGETINDICATOR_ABSTRACTDETECTOR_H
