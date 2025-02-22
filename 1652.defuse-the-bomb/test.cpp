#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing decrypt")
{
    Solution solution = Solution();

    vector<int> code = {5, 7, 1, 4};
    int k = 3;
    vector<int> output = {12, 10, 16, 13};
    CHECK(solution.decrypt(code, k) == output);

    vector<int> code2 = {2, 4, 9, 3};
    int k2 = -2;
    vector<int> output2 = {12, 5, 6, 13};
    CHECK(solution.decrypt(code2, k2) == output2);
}
