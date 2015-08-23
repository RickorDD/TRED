#pragma once
#define OUTPUT 1
#define INPUT 1
#define INPUT_PULLUP 1

using namespace std;

void delay(unsigned long ms);

void pinMode(int pin, int mode);

void analogWrite(int pin, int pwm);

int analogRead(int pin);

int analogRead(int pin,int value);

bool digitalRead(int pin);

bool digitalRead(int pin,bool value);

int millis();
