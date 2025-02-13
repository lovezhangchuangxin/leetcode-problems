#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing findMedianSortedArrays")
{
    Solution solution = Solution();

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double res1 = solution.findMedianSortedArrays(nums1, nums2);
    CHECK(res1 == 2.0);
}