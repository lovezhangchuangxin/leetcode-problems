#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxDistance")
{
    Solution solution = Solution();

    vector<vector<int>> arrays1 = {{1, 2, 3}, {4, 5}, {1, 2, 3}};
    CHECK(solution.maxDistance(arrays1) == 4);
    vector<vector<int>> arrays2 = {{1}, {1}};
    CHECK(solution.maxDistance(arrays2) == 0);
}