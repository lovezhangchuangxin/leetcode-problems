#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing Skiplist")
{
    Skiplist skiplist;

    CHECK(skiplist.search(1) == false);
    skiplist.add(1);
    CHECK(skiplist.search(1) == true);
    skiplist.erase(0);
    CHECK(skiplist.search(1) == true);
    skiplist.erase(1);
    CHECK(skiplist.search(1) == false);
}
