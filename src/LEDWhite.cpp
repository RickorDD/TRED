#include <stdio.h>
#include "LEDWhite.h"
LEDWhite::LEDWhite()
{
	_states = false;
}

void LEDWhite::on()
{
	printf ("%s \n", "LED On");
	_states=true;
}

void LEDWhite::off()
{
	printf ("%s \n", "LED Off");
	_states=false;
}

