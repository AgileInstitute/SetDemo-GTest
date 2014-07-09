// SetTests.cpp : Defines the entry point for the console application.
//

#include "gtest/gtest.h"
#include <set.h>

class SetFixture : public ::testing::Test {
protected:
	virtual void SetUp() {
		// any furter init
	}
	Set set;
};

TEST_F(SetFixture, ThrowsExceptionForEmptyString_JustToShowHowToTestForExceptions) {
	EXPECT_THROW(set.add(""), NotALegitimateElementForThisTypeOfSet);
}

TEST_F(SetFixture, AddingEquivalentItemTwiceAddsItOnlyOnce) {
	std::string aString("this string is equal to the other one, but not the same reference");
	std::string anEquivalentStringInADifferentMemoryLocation("this string is equal to the other one, but not the same reference");
	set.add(aString);
	set.add(anEquivalentStringInADifferentMemoryLocation);
	EXPECT_EQ(1, set.size());
}

TEST_F(SetFixture, AddingItemIncreasesSize) {
	set.add("this string");
	EXPECT_TRUE(set.contains("this string"));
	EXPECT_EQ(1, set.size());
}

TEST_F(SetFixture, InitialSizeIsZero) {
	EXPECT_EQ(0, set.size());
}

TEST(CalculatorTest, Addition) {
	EXPECT_EQ(4, 2 + 2);
}

int main(int argc, char** argv)
{
	// run all tests
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
