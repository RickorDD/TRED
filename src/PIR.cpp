#include "Arduino.h"
#include "PIR.h"

#define AnalogIn_PIRTOP 0
#define AnalogIn_PIRDOWN 1
const int ValueMinPIR=600;
#define VALUE_PIRTOP analogRead(AnalogIn_PIRTOP)
#define VALUE_PIRDOWN analogRead(AnalogIn_PIRDOWN)


PIR::PIR()
{
    

}

bool PIR::DedicateMove()
{
	if(VALUE_PIRTOP+VALUE_PIRDOWN > ValueMinPIR)
        {
        return 1;	
	}
        else
  	{
        return 0;
        }
}
