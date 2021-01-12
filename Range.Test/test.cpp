#include "pch.h"
#include "../Range/range.c++"



class RangeTests : public::testing::Test {

public:
	Range* range1 = new Range();
	Range* range2 = new Range(5);
	Range* range3 = new Range(1, 10);
};

	TEST_F(RangeTests, caninitialiseLimits) {
		ASSERT_EQ(range1 -> start, 0);
		ASSERT_EQ(range1 -> limit, 0);
  }

	TEST_F(RangeTests, canintialiseCustomEnd) {
		ASSERT_EQ(range2 -> start, 0);
		ASSERT_EQ(range2 -> limit, 5);
	}

	TEST_F(RangeTests, canintialisecustomStartandLimit) {
		ASSERT_EQ(range3 -> start, 1);
		ASSERT_EQ(range3 -> limit, 10)
	}


