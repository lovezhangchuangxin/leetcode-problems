#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing triangle")
{
    Solution s;
    vector<vector<int>> triangle1 = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    CHECK(s.minimumTotal(triangle1) == 11);
    vector<vector<int>> triangle2 = {{-10}};
    CHECK(s.minimumTotal(triangle2) == -10);
}