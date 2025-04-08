#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minimumOperations")
{
    Solution solution = Solution();

    vector<int> nums1 = {1, 2, 3, 4, 2, 3, 3, 5, 7};
    CHECK(solution.minimumOperations(nums1) == 2);

    vector<int> nums2 = {4, 5, 6, 4, 4};
    CHECK(solution.minimumOperations(nums2) == 2);
}