#include <Arduino.h>
#include "LED.h"
#include "cie1931.h"

const int DigitalOut_LEDWHITE = 3;
const int PWM_LEDWHITE = 50;
const int DigitalOut_LEDGOLD = 9;
const int PWM_LEDGOLD = 50;
unsigned int count = 101;
unsigned int ValueCIELEDWhite;
unsigned long prevMillis = 0;
const unsigned int TimeDim = 40;

#define LEDWHITEON analogWrite(DigitalOut_LEDWHITE,PWM_LEDWHITE);
#define LEDWHITEOFF analogWrite(DigitalOut_LEDWHITE,0);
#define LEDGOLDON  analogWrite(DigitalOut_LEDGOLD,PWM_LEDGOLD);
#define LEDGOLDOFF analogWrite(DigitalOut_LEDGOLD,0);

LED::LED() {
	pinMode(DigitalOut_LEDWHITE, OUTPUT);
	pinMode(DigitalOut_LEDGOLD, OUTPUT);
	_WhiteState = false;
	_GoldState = false;
}

void LED::WhiteOn() {
	LEDWHITEON
	;
	_WhiteState = true;
}

void LED::WhiteOff() {
	LEDWHITEOFF
	;
	_WhiteState = false;
}

void LED::GoldOn() {
	LEDGOLDON
	;
	_GoldState = true;
}

void LED::GoldOff() {
	LEDGOLDOFF
	;
	_GoldState = false;
}

bool LED::GoldState() {
	return _GoldState;
}

bool LED::WhiteState() {
	return _WhiteState;
}

bool LED::WhiteDim() {
	unsigned long curMillis = millis();
	if ((curMillis - prevMillis) > TimeDim) {
		prevMillis = millis();
		ValueCIELEDWhite=cie[count];
		analogWrite(DigitalOut_LEDWHITE,ValueCIELEDWhite);
		count--;
		}

	if (count == 0)
		return 0;
	else
		return 1;
}

bool LED::WhiteTime() {
//TODO
	return 0;
}
