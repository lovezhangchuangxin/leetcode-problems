#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing replaceElements")
{
    Solution solution = Solution();

    vector<int> arr1 = {17, 18, 5, 4, 6, 1};
    vector<int> output1 = {18, 6, 6, 6, 1, -1};
    CHECK(solution.replaceElements(arr1) == output1);
}
