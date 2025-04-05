#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing trap")
{
    Solution solution = Solution();

    vector<int> height1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    CHECK(solution.trap(height1) == 6);

    vector<int> height2 = {4, 2, 0, 3, 2, 5};
    CHECK(solution.trap(height2) == 9);
}