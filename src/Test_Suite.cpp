/*
#include <cstring>
#include <Arduino.h>
#include "gtest/gtest.h"
#include "LED.h"
#include "Switches.h"

using namespace std;
LED led;
PIR pir;
Switches switches;

class TimeExecutionTest: public ::testing::EmptyTestEventListener {

private:
	virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
		string testname = test_info.test_case_name();
		if (testname == "LEDWhiteDimFor") {
			ASSERT_LT(test_info.result()->elapsed_time(), 35000);
		}
	}
};

TEST(DISABLED_PIR_A0_A1,Dedicate) {
	analogReadMockInit();
	analogReadMock(0, 50);
	analogReadMock(1, 700);
	ASSERT_TRUE(pir.DedicateMove());
}

TEST(DISABLED_Switches,State) {
	digitalReadMockInit();
	digitalReadMock(2, 1);
	ASSERT_TRUE(switches.States());
}

TEST(LEDWhiteDim,Time) {

	while (led.WhiteDim())
		;
}

TEST(DISABLED_LEDWhiteDimFor,Time) {

	led.WhiteDimFor();
}

TEST(DISABLED_TimeLEDWhiteOn,Time) {
	while (led.WhiteTimeOn())
		;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	::testing::TestEventListeners& listeners =
			::testing::UnitTest::GetInstance()->listeners();
	listeners.Append(new TimeExecutionTest);
	return RUN_ALL_TESTS();
}
*/
