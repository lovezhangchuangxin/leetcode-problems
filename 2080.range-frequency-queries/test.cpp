#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing RangeFreqQuery")
{
    vector<int> arr = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    RangeFreqQuery *rangeFreqQuery = new RangeFreqQuery(arr);

    CHECK(rangeFreqQuery->query(0, 11, 33) == 2);
}