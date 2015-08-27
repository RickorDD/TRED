/*
#include <Arduino.h>
#include "LED.h"

LED led;

int main() {
	while (1) {
		if (!led.WhiteState()) {
			led.WhiteOn();
		}
		if (led.WhiteState()) {
			while (!led.WhiteTimeOn()) {
				while (led.WhiteDim());
				if (!led.WhiteDim()) {
					led.WhiteOff();
					delay(2000);
				}
			}
		}
	}
}
*/
