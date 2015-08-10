#include "Arduino.h"
#include "Switches.h"

#define DigitalIn_Switches 2
#define STATE_SWITCH digitalRead(DigitalIn_Switches)

Switches::Switches() {

}

bool Switches::States() {

	if (STATE_SWITCH==1) {
		return 1;
	} else {
		return 0;
	}
}


