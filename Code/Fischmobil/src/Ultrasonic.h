#pragma once

#include "GenericDistanceSensor.h"

class Ultrasonic : public GenericDistanceSensor {
    public:
        Ultrasonic(unsigned int echo, unsigned int trigger) : m_Echo(echo), m_Trigger(trigger) {}
        void init() override;
        unsigned int getDistance() override;
    private:
        unsigned int m_Echo;
        unsigned int m_Trigger;
};