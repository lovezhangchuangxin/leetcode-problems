#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing hasAllCodes")
{
    Solution solution = Solution();

    CHECK(solution.hasAllCodes("00110110", 2) == true);
    CHECK(solution.hasAllCodes("0", 20) == false);
}
