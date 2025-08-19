#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing zeroFilledSubarray")
{
    Solution *obj = new Solution();
    vector<int> nums1 = {1, 3, 0, 0, 2, 0, 0, 4};
    CHECK(obj->zeroFilledSubarray(nums1) == 6);
    vector<int> nums2 = {0, 0, 0, 0, 0};
    CHECK(obj->zeroFilledSubarray(nums2) == 15);
    vector<int> nums3 = {1, 2, 3};
    CHECK(obj->zeroFilledSubarray(nums3) == 0);
    vector<int> nums4 = {0};
    CHECK(obj->zeroFilledSubarray(nums4) == 1);
    vector<int> nums5 = {0, 1, 0, 0};
    CHECK(obj->zeroFilledSubarray(nums5) == 4);
}