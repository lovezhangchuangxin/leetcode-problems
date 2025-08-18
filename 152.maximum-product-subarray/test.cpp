#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxProduct")
{
    Solution solution = Solution();

    vector<int> nums = {2, 3, -2, 4};
    int output = solution.maxProduct(nums);
    int expected = 6;
    CHECK(output == expected);
}