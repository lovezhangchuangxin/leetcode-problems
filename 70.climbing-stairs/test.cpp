#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing climbStairs")
{
    Solution solution = Solution();

    CHECK(solution.climbStairs(1) == 1);
    CHECK(solution.climbStairs(2) == 2);
    CHECK(solution.climbStairs(3) == 3);
    CHECK(solution.climbStairs(4) == 5);
}