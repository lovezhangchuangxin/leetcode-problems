#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing largestRectangleArea")
{
    Solution s;
    vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    CHECK(s.largestRectangleArea(heights1) == 10);
    vector<int> heights2 = {2, 4};
    CHECK(s.largestRectangleArea(heights2) == 4);
    vector<int> heights3 = {1, 1, 1, 1};
    CHECK(s.largestRectangleArea(heights3) == 4);
}