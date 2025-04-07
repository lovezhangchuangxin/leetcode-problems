#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing partitionEqualSubsetSum")
{
    Solution s;
    vector<int> nums1 = {1, 5, 11, 5};
    CHECK(s.canPartition(nums1) == true);

    vector<int> nums2 = {1, 2, 3, 5};
    CHECK(s.canPartition(nums2) == false);

    vector<int> nums3 = {1, 2, 3, 4};
    CHECK(s.canPartition(nums3) == true);
}