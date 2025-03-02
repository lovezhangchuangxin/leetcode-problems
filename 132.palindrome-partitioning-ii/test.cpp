#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minCut")
{
    Solution solution = Solution();

    CHECK(solution.minCut("aab") == 1);
    CHECK(solution.minCut("a") == 0);
    CHECK(solution.minCut("ab") == 1);
}