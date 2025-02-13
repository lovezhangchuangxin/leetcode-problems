#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing searchMatrix")
{
    Solution solution = Solution();

    vector<vector<int>> matrix;
    int target;

    SUBCASE("Test Case 1")
    {
        matrix = {
            {1, 4, 7, 11, 15},
            {2, 5, 8, 12, 19},
            {3, 6, 9, 16, 22},
            {10, 13, 14, 17, 24},
            {18, 21, 23, 26, 30}};
        target = 5;

        CHECK(solution.searchMatrix(matrix, target) == true);
    }

    SUBCASE("Test Case 2")
    {
        matrix = {
            {1, 4, 7, 11, 15},
            {2, 5, 8, 12, 19},
            {3, 6, 9, 16, 22},
            {10, 13, 14, 17, 24},
            {18, 21, 23, 26, 30}};
        target = 20;

        CHECK(solution.searchMatrix(matrix, target) == false);
    }
}