#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing rob")
{
    Solution solution = Solution();

    vector<int> nums1 = {1, 2, 3, 1};
    CHECK(solution.rob(nums1) == 4);
}
