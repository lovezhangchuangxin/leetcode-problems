#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxDistance")
{
    Solution solution = Solution();

    vector<int> position1 = {1, 2, 3, 4, 7};
    int m1 = 3;
    CHECK(solution.maxDistance(position1, m1) == 3);
}