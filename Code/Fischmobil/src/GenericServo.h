#pragma once

class GenericServo {
    public:
        virtual void init() = 0;
        virtual void setAngle(int angle) = 0;
        virtual int getAngle() = 0;
        virtual void addAngle(int angle) = 0;
};