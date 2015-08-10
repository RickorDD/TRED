#include "Brightness.h"

const int ValueMinBrightSensor=200;
#define PIN_BrightSensor
#define VALUE_BRIGHTSENSOR 100


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
