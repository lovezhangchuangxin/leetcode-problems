#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minimumRecolors")
{
    Solution solution = Solution();

    string blocks1 = "WBWBBBW";
    int k1 = 2;
    CHECK(solution.minimumRecolors(blocks1, k1) == 0);
}
