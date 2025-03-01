#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing partition")
{
    Solution solution = Solution();

    string s = "aab";
    vector<vector<string>> output = solution.partition(s);
    vector<vector<string>> expected = {
        {"a", "a", "b"},
        {"aa", "b"}};
    CHECK(output == expected);
}