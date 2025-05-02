#pragma once

class GenericDCMotor {
    public:
        virtual void init() = 0;
        virtual void setSpeed(int speed) = 0;
        virtual void addSpeed(int speed) = 0;
};