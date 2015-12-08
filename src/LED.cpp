#include <Arduino.h>
#include "LED.h"
#include "PIR.h"
#include "CIE1931.h"

const int DigitalOut_LEDWHITE = 3;
const int PWM_LEDWHITE = 100;
const int DigitalOut_LEDGOLD = 9;
const int PWM_LEDGOLD = 255;
unsigned int count = 100;
unsigned int Value, ValueNeg;
unsigned int ValueCIELEDWhite;
unsigned long ul_prevMillis = 0UL;
const unsigned long ul_TimeDim = 60UL;
const unsigned int ul_TimeLEDWhiteOn = 10000UL;

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
	ValueNeg = 100 - Value;
	ValueCIELEDWhite = cie[ValueNeg];
	analogWrite(DigitalOut_LEDWHITE, ValueCIELEDWhite);
	unsigned long ul_curMillis = millis();
	if ((ul_curMillis - ul_prevMillis) > ul_TimeDim) {
		ul_prevMillis = millis();
		Value = (Value + 1) % 101;
	}
	if (ValueNeg == 0) {
		return 0;
	} else
		return 1;
}

bool LED::WhiteDimFor() {

	for (unsigned int i = 100; i >= 0;) {
		unsigned long ul_curMillis = millis();
//TODO	if (i == 40) break;
		if ((ul_curMillis - ul_prevMillis) > ul_TimeDim) {
			ul_prevMillis = millis();
			i--;
			if (i == 0)
				return 0;
		}
		ValueCIELEDWhite = cie[i];
		analogWrite(DigitalOut_LEDWHITE, ValueCIELEDWhite);
	}
	return 1;
}

bool LED::WhiteTimeOn() {
	unsigned long ul_curMillis = millis();
	if ((ul_curMillis - ul_prevMillis) > ul_TimeLEDWhiteOn) {
		ul_prevMillis = millis();
		return 0;
	} else
		return 1;
}
