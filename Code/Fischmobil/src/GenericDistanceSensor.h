#pragma once

class GenericDistanceSensor {
    public:
        virtual void init() = 0;
        virtual unsigned int getDistance() = 0;
};