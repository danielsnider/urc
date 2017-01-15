#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int _pin, int _dirPin){
  pin = _pin;
  dirPin = _dirPin;
  pinMode(pin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void Motor::doMotors(double input){
  bool _direction;
  if(input < 0)
    _direction = false;
  else 
    _direction = true;
  
  digitalWrite(dirPin,_direction);
  analogWrite(pin, map(0,1,0,255,abs(input)));
}