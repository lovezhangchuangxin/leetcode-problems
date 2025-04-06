#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxArea")
{
    Solution s;
    vector<int> height{1, 8, 6, 2, 5, 4, 8, 3, 7};
    CHECK(s.maxArea(height) == 49);
    height = {1, 1};
    CHECK(s.maxArea(height) == 1);
    height = {4, 3, 2, 1, 4};
    CHECK(s.maxArea(height) == 16);
    height = {1, 2, 1};
    CHECK(s.maxArea(height) == 2);
}