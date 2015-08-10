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
