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

bool State::LEDWhite()
{
	return led.WhiteState();
}

void State::LEDGoldOn()
{
	led.GoldOn();
}

void State::LEDGoldOff()
{
	led.GoldOff();
}

bool State::LEDGold()
{
	return led.GoldState();
}

bool State::LEDWhiteDim()
{
	bool State=led.WhiteDim();
	if (State==0)
		return 0;
	else
	{
		while(led.WhiteDim());
		return 1;
	}
}
