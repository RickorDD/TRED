#include "PIR.h"

#define PIN_PIRTOP A0
#define PIN_PIRDOWN A1
const int ValueMinPIR=600;
#define VALUE_PIRTOP 700
#define VALUE_PIRDOWN 0


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
