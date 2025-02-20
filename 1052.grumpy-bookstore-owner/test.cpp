#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxSatisfied")
{
    Solution solution = Solution();

    vector<int> customers1 = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> grumpy1 = {0, 1, 0, 1, 0, 1, 0, 1};
    int minutes1 = 3;
    int res1 = 16;
    CHECK(solution.maxSatisfied(customers1, grumpy1, minutes1) == res1);
}