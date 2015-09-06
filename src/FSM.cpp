#include "FSM.h"
#include "LED.h"

LED led;

State::State() {

}

void State::LEDWhiteOn()
{
	led.WhiteOn();
}

void State::LEDWhiteOff()
{
	led.WhiteOff();
}

void State::LEDGoldOn()
{
	led.GoldOn();
}

void State::LEDGoldOff()
{
	led.GoldOff();
}

bool State::LEDWhiteDim()
{
	while(led.WhiteDim());
	bool State=led.WhiteDim();
	if (State==0)
		return 0;
	else
		return 1;
}
