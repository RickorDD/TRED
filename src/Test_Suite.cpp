#include <cstring>
#include <Arduino.h>
#include "gtest/gtest.h"
#include "LED.h"
#include "PIR.h"
#include "Switches.h"

using namespace std;
LED led;
PIR pir;
Switches switches;


class TimeExecutionTest: public ::testing::EmptyTestEventListener {

private:
	virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
		string testname = test_info.test_case_name();
		if (testname == "LEDWhiteDim") {
			ASSERT_LT(test_info.result()->elapsed_time(), 4000);
		}
	}
};

TEST(PIRA0A1,Dedicate)
{
analogReadMockInit();
analogReadMock(0,600);
analogReadMock(1,50);
ASSERT_TRUE(pir.DedicateMove());
}

TEST(SWITCH,State)
{
digitalReadMockInit();
digitalReadMock(2,1);
ASSERT_TRUE(switches.States());
}

TEST(LEDWhiteDim,Time) {

	while (led.WhiteDim())
		;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	::testing::TestEventListeners& listeners =
			::testing::UnitTest::GetInstance()->listeners();
	listeners.Append(new TimeExecutionTest);
	return RUN_ALL_TESTS();
}

