#include "Brightness.h"
#include "Arduino.h"

const int ValueMinBrightSensor=200;
#define AnalogIn_BrightSensor 2
#define VALUE_BRIGHTSENSOR analogRead(AnalogIn_BrightSensor)


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
