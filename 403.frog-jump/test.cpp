#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing canCross")
{
    Solution solution = Solution();

    vector<int> stones1 = {0, 1, 3, 5, 6, 8, 12, 17};
    CHECK(solution.canCross(stones1) == true);
}