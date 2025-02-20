#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing evenOddBit")
{
    Solution solution = Solution();

    vector<int> output1 = {1, 2};
    CHECK(solution.evenOddBit(50) == output1);

    vector<int> output2 = {0, 1};
    CHECK(solution.evenOddBit(2) == output2);
}