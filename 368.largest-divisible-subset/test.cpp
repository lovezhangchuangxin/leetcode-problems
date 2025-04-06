#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing largestDivisibleSubset")
{
    Solution s;
    vector<int> nums1 = {1, 2, 3};
    vector<int> result1 = {1, 2};
    CHECK(s.largestDivisibleSubset(nums1) == result1);

    vector<int> nums2 = {1, 2, 4, 8};
    vector<int> result2 = {1, 2, 4, 8};
    CHECK(s.largestDivisibleSubset(nums2) == result2);

    vector<int> nums3 = {3, 6, 7, 12};
    vector<int> result3 = {3, 6, 12};
    CHECK(s.largestDivisibleSubset(nums3) == result3);
}