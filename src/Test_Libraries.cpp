/*
#include "gtest/gtest.h"
#include "LED.h"
#include "Brightness.h"
#include "PIR.h"
#include "Switches.h"

LED led;
Brightness brightness;
PIR pir;
Switches switches;

TEST(Brightness, Dark) {
	ASSERT_TRUE(brightness.DedicateDark());
}

TEST(PIR, DedicateMove) {
	ASSERT_FALSE(pir.DedicateMove());
}

TEST(Switches, States) {
	ASSERT_TRUE(switches.States());
}

TEST(LEDWhiteOn, States) {
	led.WhiteOn();
	ASSERT_TRUE(led.WhiteState());
}

TEST(LEDGoldOn, States) {
	led.GoldOn();
	ASSERT_TRUE(led.GoldState());
}

TEST(LEDWhite, Dim) {
	ASSERT_TRUE(led.WhiteDim());
}

TEST(LEDWhite, Time) {
	ASSERT_TRUE(led.WhiteTime());
}
*/
