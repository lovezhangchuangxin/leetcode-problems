#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing minimumWhiteTiles")
{
    Solution solution = Solution();

    string floor1 = "11111";
    int numCarpets1 = 2;
    int carpetLen1 = 3;
    CHECK(solution.minimumWhiteTiles(floor1, numCarpets1, carpetLen1) == 0);

    string floor2 = "1110111";
    int numCarpets2 = 2;
    int carpetLen2 = 1;
    CHECK(solution.minimumWhiteTiles(floor2, numCarpets2, carpetLen2) == 4);
}