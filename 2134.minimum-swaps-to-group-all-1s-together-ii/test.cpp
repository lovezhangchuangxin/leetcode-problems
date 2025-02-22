#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minSwaps")
{
    Solution solution = Solution();

    vector<int> nums1 = {0, 1, 0, 1, 1, 0, 0};
    CHECK(solution.minSwaps(nums1) == 1);
}
