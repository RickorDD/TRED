#include "LEDWhite.h"
#define LEDWHITEPIN 3
#define LEDWHITEPWM 50
//#define LEDWHITEON analogWrite(LEDPIN,LEDWHITEPWM);
//#define LEDWHITEOFF analogWrite(LEDPIN,0);

LEDWhite::LEDWhite()
{

}

bool LEDWhite::on()
{
	//LEDWHITEON;
	return 1;
}

bool LEDWhite::off()
{
	//LEDWHITEOFF
	return 1;
}

