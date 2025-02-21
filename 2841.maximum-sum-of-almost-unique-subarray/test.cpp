#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxSum")
{
    Solution solution = Solution();

    vector<int> nums1 = {2, 6, 7, 3, 1, 7};
    int m1 = 3;
    int k1 = 4;
    CHECK(solution.maxSum(nums1, m1, k1) == 18);
}
