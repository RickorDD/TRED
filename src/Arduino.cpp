#include <ctime>
#include "Arduino.h"

void delay(unsigned long ms) {

}

void pinMode(int pin, int mode) {

}

void analogWrite(int pin, int pwm) {

}

int analogRead(int pin)
{
	return 100;
}

bool digitalRead(int pin)
{
	return 1;
}

int millis()
{
	return clock();
}
