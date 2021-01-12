#include "pch.h"
#include "../Range/range.c++"



class RangeTests : public::testing::Test {

public:
	Range* range1 = new Range();
	Range* range2 = new Range(5);
	Range* range3 = new Range(1, 10);
	Range* range4 = new Range(5, 2);

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
		ASSERT_EQ(range3 -> limit, 10);
		ASSERT_EQ(range4 -> start, 2);
		ASSERT_EQ(range4 -> limit, 5);
	}
	
	TEST_F(RangeTests, canrstrtech){
		range2 -> rstretch();
		ASSERT_EQ(range2 -> start, 0);
		ASSERT_EQ(range2 -> limit, 6);
	}

	TEST_F(RangeTests, customizeRstretch){
		range2 -> rstretch(2);
		ASSERT_EQ(range2 -> start, 0);
		ASSERT_EQ(range2 -> limit, 7);
	}

	TEST_F(RangeTests, canLstretch){
		range3 -> lstretch();
		ASSERT_EQ(range3 -> start, 0);
		ASSERT_EQ(range3 -> limit, 10);
	}
	


