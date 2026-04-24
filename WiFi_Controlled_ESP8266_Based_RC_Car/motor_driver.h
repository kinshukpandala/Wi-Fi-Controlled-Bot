#pragma once

class MotorDriver {
public:
    MotorDriver(int ain1, int ain2, int pwma,
                int bin1, int bin2, int pwmb,
                int stby);

    void init();
    void setMotor(int leftSpeed, int rightSpeed);

private:
    int ain1, ain2, pwma;
    int bin1, bin2, pwmb;
    int stby;

    int channelA = 0;
    int channelB = 1;
};
