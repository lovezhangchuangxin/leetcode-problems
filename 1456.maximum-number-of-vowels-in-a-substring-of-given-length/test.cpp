#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxVowels")
{
    Solution solution = Solution();

    string s1 = "abciiidef";
    int k1 = 3;
    CHECK(solution.maxVowels(s1, k1) == 3);

    string s2 = "aeiou";
    int k2 = 2;
    CHECK(solution.maxVowels(s2, k2) == 2);
}