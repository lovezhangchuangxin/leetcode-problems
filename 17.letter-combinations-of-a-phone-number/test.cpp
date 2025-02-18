#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing letterCombinations")
{
    Solution solution = Solution();

    CHECK(solution.letterCombinations("23") == vector<string>{"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"});
    CHECK(solution.letterCombinations("") == vector<string>{});
}