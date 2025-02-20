#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing evenOddBit")
{
    Solution solution = Solution();

    CHECK(solution.evenOddBit(0) == vector<int>{0, 0});
    CHECK(solution.evenOddBit(50) == vector<int>{1, 2});
    CHECK(solution.evenOddBit(2) == vector<int>{0, 1});
}
