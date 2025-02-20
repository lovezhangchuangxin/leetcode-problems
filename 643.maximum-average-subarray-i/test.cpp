#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing findMaxAverage")
{
    Solution solution = Solution();

    vector<int> nums1 = {1, 12, -5, -6, 50, 3};
    int k1 = 4;
    CHECK(solution.findMaxAverage(nums1, k1) == 12.75);

    vector<int> nums2 = {5};
    int k2 = 1;
    CHECK(solution.findMaxAverage(nums2, k2) == 5.0);
}