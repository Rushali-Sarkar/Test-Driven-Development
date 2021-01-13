#include "pch.h"
#include "../Range/range.c++"

class RangeTests : public ::testing::Test {

public:
	Range *range1 = new Range();
	Range *range2 = new Range(5);
	Range *range3 = new Range(1, 10);
	Range *range4 = new Range(5, 2);
	Range *range5 = new Range(3, 4);
};

TEST_F(RangeTests, caninitialiseLimits)
{
	ASSERT_EQ(range1->start, 0);
	ASSERT_EQ(range1->limit, 0);
}

TEST_F(RangeTests, canintialiseCustomEnd)
{
	ASSERT_EQ(range2->start, 0);
	ASSERT_EQ(range2->limit, 5);
}

TEST_F(RangeTests, canintialisecustomStartandLimit)
{
	ASSERT_EQ(range3->start, 1);
	ASSERT_EQ(range3->limit, 10);
	ASSERT_EQ(range4->start, 2);
	ASSERT_EQ(range4->limit, 5);
}

TEST_F(RangeTests, canrstretch)
{
	range2->rstretch();
	ASSERT_EQ(range2->start, 0);
	ASSERT_EQ(range2->limit, 6);
}

TEST_F(RangeTests, customizeRstretch)
{
	range2->rstretch(2);
	ASSERT_EQ(range2->start, 0);
	ASSERT_EQ(range2->limit, 7);
}

TEST_F(RangeTests, canLstretch)
{
	range3->lstretch();
	ASSERT_EQ(range3->start, 0);
	ASSERT_EQ(range3->limit, 10);
}

TEST_F(RangeTests, customLstretch)
{
	range4->lstretch(2);
	ASSERT_EQ(range4->start, 0);
	ASSERT_EQ(range4->limit, 5);
}

TEST_F(RangeTests, twoSidedStretch)
{
	range3->stretch();
	ASSERT_EQ(range3->start, 0);
	ASSERT_EQ(range3->limit, 11);
}

TEST_F(RangeTests, customTwoSidedStretch)
{
	range4->stretch(2);
	ASSERT_EQ(range4->start, 0);
	ASSERT_EQ(range4->limit, 7);
}

TEST_F(RangeTests, Squeeze)
{
	range4->squeeze();
	ASSERT_EQ(range4->start, 3);
	ASSERT_EQ(range4->limit, 4);

	range5->squeeze();
	ASSERT_EQ(range5->start, 0);
	ASSERT_EQ(range5->limit, 0);
}


TEST_F(RangeTests, CustomSqueeze)
{
	range3->squeeze(2);
	ASSERT_EQ(range3->start, 3);
	ASSERT_EQ(range3->limit, 8);
}

TEST_F(RangeTests, invalidCustomSqueeze)
{
	range5->squeeze(2);
	ASSERT_EQ(range5->start, 0);
	ASSERT_EQ(range5->limit, 0);
}

TEST_F(RangeTests,customShift)
{
	range5->shift(2);
	ASSERT_EQ(range5->start, 5);
	ASSERT_EQ(range5->limit, 6);

}

TEST_F(RangeTests, Shift)
{
	range5->shift();
	ASSERT_EQ(range5->start, 4);
	ASSERT_EQ(range5->limit, 5);
}

TEST_F(RangeTests, length)
{   
	ASSERT_EQ(range5->length(), 1);
}

TEST_F(RangeTests, toString)
{
	ASSERT_EQ(range5-> toString(), "[3, 4)");
}


