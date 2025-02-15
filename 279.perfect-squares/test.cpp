#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing numSquares")
{
    Solution solution = Solution();

    CHECK(solution.numSquares(12) == 3);
}