#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing longestCommonSubsequence")
{
    Solution solution = Solution();

    string text1 = "abcde";
    string text2 = "ace";
    int res = solution.longestCommonSubsequence(text1, text2);
    CHECK(res == 3);
}