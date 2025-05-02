#pragma once

struct GyroData_t {
    int xAcc;
    int yAcc;
    int zAcc;
    int xGyro;
    int yGyro;
    int zGyro;
};

class GenericGyroSensor {
    public:
        virtual void init() = 0;
        int getXAcc() { read(); return m_Data.xAcc; }
        int getYAcc() { read(); return m_Data.yAcc; }
        int getZAcc() { read(); return m_Data.zAcc; }
        int getXGyro() { read(); return m_Data.xGyro; }
        int getYGyro() { read(); return m_Data.yGyro; }
        int getZGyro() { read(); return m_Data.zGyro; }
        GyroData_t& getRaw() { read(); return m_Data; }
    protected:
        GyroData_t m_Data;
        virtual void read() = 0;
};