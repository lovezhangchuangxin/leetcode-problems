#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing searchMatrix")
{
    Solution solution = Solution();

    vector<vector<int>> matrix1 = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    int target1 = 3;
    CHECK(solution.searchMatrix(matrix1, target1) == true);
}