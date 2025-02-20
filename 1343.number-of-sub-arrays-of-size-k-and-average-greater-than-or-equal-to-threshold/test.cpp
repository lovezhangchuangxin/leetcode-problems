#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing numOfSubarrays")
{
    Solution solution = Solution();

    vector<int> arr1 = {2, 2, 2, 2, 5, 5, 5, 8};
    int k1 = 3, threshold1 = 4;
    CHECK(solution.numOfSubarrays(arr1, k1, threshold1) == 3);

    vector<int> arr2 = {1, 1, 1, 1, 1};
    int k2 = 5, threshold2 = 0;
    CHECK(solution.numOfSubarrays(arr2, k2, threshold2) == 1);
}