#pragma once

class GenericColorSensor {
    public:
        GenericColorSensor() : m_Threshold(0) {}
        GenericColorSensor(unsigned int treshold) : m_Threshold(treshold) {}
        virtual void init() = 0;
        virtual bool detect() = 0;
        void setThreshold(unsigned int treshold) { m_Threshold = treshold; };
    protected:
        unsigned int m_Threshold;
};