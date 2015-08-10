#pragma once

#define OUTPUT 1
#define INPUT 1
#define INPUT_PULLUP 1


void delay(unsigned long ms);

void pinMode(int pin, int mode);

void analogWrite(int pin, int pwm);

int analogRead(int pin);

bool digitalRead(int pin);
