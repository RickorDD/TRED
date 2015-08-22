#include "gtest/gtest.h"
#include "LED.h"

LED led;

class TimeExecutionTest: public ::testing::EmptyTestEventListener {

private:
	virtual void OnTestEnd(const ::testing::TestInfo& test_info) {
		ASSERT_LT(test_info.result()->elapsed_time(), 3000);
	}
};

TEST(LEDWhiteDim,Time) {
	::testing::TestEventListeners& listeners =
			::testing::UnitTest::GetInstance()->listeners();
	listeners.Append(new TimeExecutionTest);
	while(led.WhiteDim());
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	auto result(RUN_ALL_TESTS());
	return result;
}

