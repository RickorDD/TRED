#include "gtest/gtest.h"
#include "LEDWhite.h"
bool LEDStates;

TEST(LEDWhiteFunc, Init) {
	LEDWhite ledwhite;
	ledwhite.on();
}

