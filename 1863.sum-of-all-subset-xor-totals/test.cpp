#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing subsetXORSum")
{
    Solution solution = Solution();
    vector<int> nums = {1, 3};
    CHECK(solution.subsetXORSum(nums) == 6);
    nums = {5, 1, 6};
    CHECK(solution.subsetXORSum(nums) == 28);
    nums = {3, 4, 5, 6, 7, 8};
    CHECK(solution.subsetXORSum(nums) == 480);
}