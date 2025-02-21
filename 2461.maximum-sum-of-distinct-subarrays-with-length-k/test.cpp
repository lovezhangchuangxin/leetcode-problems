#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maximumSubarraySum")
{
    Solution solution = Solution();

    vector<int> nums1 = {1, 5, 4, 2, 9, 9, 9};
    int k1 = 3;
    CHECK(solution.maximumSubarraySum(nums1, k1) == 15);
}
