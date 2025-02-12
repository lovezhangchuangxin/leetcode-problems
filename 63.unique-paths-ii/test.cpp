#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing uniquePathsWithObstacles")
{
    Solution solution = Solution();

    vector<vector<int>> grid1 = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    CHECK(solution.uniquePathsWithObstacles(grid1) == 2);
}