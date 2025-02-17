#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxProfit")
{
    Solution solution = Solution();

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    CHECK(solution.maxProfit(prices1) == 5);
}