#include "Switches.h"

#define STATE_SWITCH 1

Switches::Switches() {

}

bool Switches::States() {

	if (STATE_SWITCH==1) {
		return 1;
	} else {
		return 0;
	}
}

