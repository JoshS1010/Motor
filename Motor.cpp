#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int pinA, int pinB, int pinPwm)
{
	_pinA = pinA;
	_pinB = pinB;
	_pinPwm  = pinPwm;
	pinMode(_pinA, OUTPUT);
	pinMode(_pinB, OUTPUT);
	pinMode(_pinPwm, OUTPUT);
}

void Motor::drive(int velocity)
{
	if (velocity > 0){
      digitalWrite(_pinA, HIGH);
      digitalWrite(_pinB, LOW);
      analogWrite(_pinPwm, velocity);
    }
    else if (velocity < 0){
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, HIGH);
      analogWrite(_pinPwm, abs(velocity));
    }
    else{
      digitalWrite(_pinA, LOW);
      digitalWrite(_pinB, LOW);
      analogWrite(_pinPwm, 0);
    }
}