#include "gtest/gtest.h"
#include "LED.h"
#include "Brightness.h"
#include "PIR.h"

LED led;
Brightness brightness;
PIR pir;

TEST(Brightness, Dark) {
	ASSERT_TRUE(brightness.DedicateDark());
}

TEST(PIR, DedicateMove) {
	ASSERT_TRUE(pir.DedicateMove());
}


