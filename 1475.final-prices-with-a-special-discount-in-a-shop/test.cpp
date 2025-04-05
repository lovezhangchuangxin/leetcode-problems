#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing finalPrices")
{
    Solution solution = Solution();

    vector<int> prices1 = {8, 4, 6, 2, 3};
    vector<int> ans1 = {4, 2, 4, 2, 3};
    CHECK(solution.finalPrices(prices1) == ans1);

    vector<int> prices2 = {1, 2, 3, 4, 5};
    vector<int> ans2 = {1, 2, 3, 4, 5};
    CHECK(solution.finalPrices(prices2) == ans2);

    vector<int> prices3 = {10, 1, 1, 6};
    vector<int> ans3 = {9, 0, 1, 6};
    CHECK(solution.finalPrices(prices3) == ans3);
}