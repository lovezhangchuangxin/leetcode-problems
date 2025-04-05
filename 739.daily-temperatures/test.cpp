#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing dailyTemperatures")
{
    Solution solution = Solution();

    vector<int> temperatures1 = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans1 = {1, 1, 4, 2, 1, 1, 0, 0};
    CHECK(solution.dailyTemperatures(temperatures1) == ans1);

    vector<int> temperatures2 = {30, 40, 50, 60};
    vector<int> ans2 = {1, 1, 1, 0};
    CHECK(solution.dailyTemperatures(temperatures2) == ans2);

    vector<int> temperatures3 = {30, 60, 90};
    vector<int> ans3 = {1, 1, 0};
    CHECK(solution.dailyTemperatures(temperatures3) == ans3);
}