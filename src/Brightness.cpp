#include "Arduino.h"
#include "Brightness.h"

const int ValueMinBrightSensor=200;
#define PIN_BrightSensor A2
#define VALUE_BRIGHTSENSOR analogRead(PIN_BrightSensor)


Brightness::Brightness()
{
    

}

bool Brightness::DedicateDark()
{
	if(VALUE_BRIGHTSENSOR < ValueMinBrightSensor)
	{
        return 1;	
	}
        else
  	{
        return 0;
        }
}
