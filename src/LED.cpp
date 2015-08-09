#include "Arduino.h"
#include "LED.h"

const int PIN_LEDWHITE=3;
const int PWM_LEDWHITE=50;
const int PIN_LEDGOLD=9;
const int PWM_LEDGOLD=50;

#define LEDWHITEON analogWrite(PIN_LEDWHITE,PWM_LEDWHITE);
#define LEDWHITEOFF analogWrite(PIN_LEDWHITE,0); 
#define LEDGOLDON analogWrite(PIN_LEDGOLD,PWM_LEDGOLD);
#define LEDGOLDOFF analogWrite(PIN_LEDGOLD,0); 

LED::LED()
{
    pinMode(PIN_LEDWHITE, OUTPUT);
    pinMode(PIN_LEDGOLD, OUTPUT);
}

void LED::WhiteOn()
{
    LEDWHITEON;
}

void LED::WhiteOff()
{
    LEDWHITEOFF;
}

void LED::GoldOn()
{
    LEDGOLDON;
}

void LED::GoldOff()
{
    LEDGOLDOFF;
}
