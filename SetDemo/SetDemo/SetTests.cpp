// SetTests.cpp : Defines the entry point for the console application.
//

#include "gtest/gtest.h"

TEST(CalculatorTest, Addition) {
	EXPECT_EQ(4, 2 + 2);
}

int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
