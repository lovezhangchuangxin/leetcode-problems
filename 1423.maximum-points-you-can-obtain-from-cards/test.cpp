#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxScore")
{
    Solution solution = Solution();

    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    CHECK(solution.maxScore(cardPoints, k) == 12);
}
