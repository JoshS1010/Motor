//Awesome H Bridge library

#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int pinA, int pinB, int pinPwm);
    void drive(int velocity);
  private:
    int _pinA;
    int _pinB;
    int _pinPwm;
};

#endif