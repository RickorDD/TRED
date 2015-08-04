#include "gtest/gtest.h"
#include "LEDWhite.h"
bool LEDStates;
LEDWhite ledwhite;

TEST(LEDWhite, On) {
	ASSERT_TRUE(ledwhite.on());
}

TEST(LEDWhite, Off) {
	ASSERT_TRUE(ledwhite.off());
}


