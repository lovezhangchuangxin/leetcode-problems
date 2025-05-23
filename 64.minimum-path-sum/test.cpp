#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minPathSum")
{
    Solution solution = Solution();

    vector<vector<int>> grid1 = {{1, 2, 3}, {4, 5, 6}};
    CHECK(solution.minPathSum(grid1) == 12);

    vector<vector<int>> grid2 = {{1, 2}, {1, 1}};
    CHECK(solution.minPathSum(grid2) == 3);
}