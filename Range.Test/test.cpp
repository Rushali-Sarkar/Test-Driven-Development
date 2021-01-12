#include "pch.h"
#include "../Range/range.c++"



class RangeTests : public::testing::Test {

public:
	Range range1;
};

	TEST_F(RangeTests, caninitialiseLimits) {
		ASSERT_EQ(range1.start, 0);
		ASSERT_EQ(range1.end, 0);
  }


