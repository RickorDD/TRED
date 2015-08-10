#include "LED.h"

const int PIN_LEDWHITE=3;
const int PWM_LEDWHITE=50;
const int PIN_LEDGOLD=9;
const int PWM_LEDGOLD=50;

#define LEDWHITEON
#define LEDWHITEOFF
#define LEDGOLDON
#define LEDGOLDOFF

LED::LED()
{
	_WhiteState=false;
	_GoldState=false;
}

void LED::WhiteOn()
{
    LEDWHITEON;
    _WhiteState=true;
}

void LED::WhiteOff()
{
    LEDWHITEOFF;
    _WhiteState=false;
}

void LED::GoldOn()
{
    LEDGOLDON;
    _GoldState=true;
}

void LED::GoldOff()
{
    LEDGOLDOFF;
    _GoldState=false;
}

bool LED::GoldState()
{
return _GoldState;
}

bool LED::WhiteState()
{
return _WhiteState;
}

bool LED::WhiteDim()
{
//TODO
return 0;
}

bool LED::WhiteTime()
{
//TODO
return 0;
}
