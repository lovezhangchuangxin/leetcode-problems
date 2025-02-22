#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing maxFreq")
{
    Solution solution = Solution();

    string s = "aababcaab";
    int maxLetters = 2;
    int minSize = 3;
    int maxSize = 4;
    CHECK(solution.maxFreq(s, maxLetters, minSize, maxSize) == 2);

    s = "aabcabcab";
    maxLetters = 2;
    minSize = 2;
    maxSize = 3;
    CHECK(solution.maxFreq(s, maxLetters, minSize, maxSize) == 3);
}
