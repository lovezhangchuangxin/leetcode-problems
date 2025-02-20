#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing getAverages")
{
    Solution solution = Solution();

    vector<int> nums1 = {7, 4, 3, 9, 1, 8, 5, 2, 6};
    int k1 = 3;
    vector<int> res1 = {-1, -1, -1, 5, 4, 4, -1, -1, -1};
    CHECK(solution.getAverages(nums1, k1) == res1);
}