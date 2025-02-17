#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing findSpecialInteger")
{
    Solution solution = Solution();

    // vector<int> arr1 = {1, 2, 2, 6, 6, 6, 6, 7, 10};
    // CHECK(solution.findSpecialInteger(arr1) == 6);

    // vector<int> arr2 = {1, 1, 2, 2, 3, 3, 3, 3};
    // CHECK(solution.findSpecialInteger(arr2) == 3);

    vector<int> arr3 = {1, 2, 3, 3};
    CHECK(solution.findSpecialInteger(arr3) == 3);
}
