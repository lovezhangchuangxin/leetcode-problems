#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing lengthOfLIS")
{
    Solution s;
    vector<int> nums1 = {10, 9, 2, 5, 3, 7, 101, 18};
    CHECK(s.lengthOfLIS(nums1) == 4);
    vector<int> nums2 = {0, 1, 0, 3, 2, 3};
    CHECK(s.lengthOfLIS(nums2) == 4);
    vector<int> nums3 = {7, 7, 7, 7, 7, 7};
    CHECK(s.lengthOfLIS(nums3) == 1);
}