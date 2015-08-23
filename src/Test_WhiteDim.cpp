#include <cstring>
#include "gtest/gtest.h"
#include "LED.h"

using namespace std;
LED led;


class TimeExecutionTest: public ::testing::EmptyTestEventListener {

private:
	virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
		string testname = test_info.test_case_name();
		if (testname == "LEDWhiteDim") {
			ASSERT_LT(test_info.result()->elapsed_time(), 3000);
		}
	}
};

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

