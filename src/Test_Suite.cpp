#include <cstring>
#include <Arduino.h>
#include "gtest/gtest.h"
#include "FSM.h"
#include "PIR.h"
#include "Switches.h"

using namespace std;
State state;
PIR pir;
Switches switches;

class TimeExecutionTest: public ::testing::EmptyTestEventListener {

private:
	virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
		string testname = test_info.test_case_name();
		if (testname == "LEDWhiteDim") {
			ASSERT_LT(test_info.result()->elapsed_time(), 8000);
		}
	}
};

TEST(PIR_A0_A1,Dedicate) {
	analogReadMockInit();
	analogReadMock(0, 50);
	analogReadMock(1, 700);
	ASSERT_TRUE(pir.DedicateMove());
}

TEST(Switches,State) {
	digitalReadMockInit();
	digitalReadMock(2, 1);
	ASSERT_TRUE(switches.States());
}

TEST(LEDWhite,State) {
	state.LEDWhiteOn();
	ASSERT_TRUE(state.LEDWhite());
}

TEST(LEDGold,State) {
	state.LEDGoldOn();
	ASSERT_TRUE(state.LEDGold());
}

TEST(LEDWhiteDim,Time) {
	state.LEDWhiteDim();
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	::testing::TestEventListeners& listeners =
			::testing::UnitTest::GetInstance()->listeners();
	listeners.Append(new TimeExecutionTest);
	return RUN_ALL_TESTS();
}
