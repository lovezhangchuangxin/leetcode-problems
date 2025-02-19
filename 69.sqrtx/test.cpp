#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing mySqrt")
{
    Solution solution = Solution();

    CHECK(solution.mySqrt(4) == 2);
    CHECK(solution.mySqrt(8) == 2);
    CHECK(solution.mySqrt(9) == 3);
}