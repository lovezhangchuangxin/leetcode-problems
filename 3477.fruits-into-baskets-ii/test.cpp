#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing numOfUnplacedFruits")
{
    Solution solution = Solution();

    vector<int> fruits1 = {4, 2, 5};
    vector<int> baskets1 = {3, 5, 4};
    CHECK(solution.numOfUnplacedFruits(fruits1, baskets1) == 1);

    vector<int> fruits2 = {3, 6, 1};
    vector<int> baskets2 = {6, 4, 7};
    CHECK(solution.numOfUnplacedFruits(fruits2, baskets2) == 0);
}