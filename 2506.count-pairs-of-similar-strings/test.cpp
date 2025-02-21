#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing similarPairs")
{
    Solution solution = Solution();

    vector<string> words = {"aba", "aabb", "abcd", "bac", "aabc"};
    CHECK(solution.similarPairs(words) == 2);
}