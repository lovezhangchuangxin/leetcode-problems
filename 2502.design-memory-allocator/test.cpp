#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing Allocator")
{
    Allocator allocator(10);
    CHECK(allocator.allocate(1, 1) == 0);
    CHECK(allocator.allocate(1, 2) == 1);
    CHECK(allocator.allocate(1, 3) == 2);
    CHECK(allocator.freeMemory(2) == 1);
    CHECK(allocator.allocate(3, 4) == 3);
    CHECK(allocator.allocate(1, 1) == 1);
    CHECK(allocator.allocate(1, 1) == 6);
    CHECK(allocator.freeMemory(1) == 3);
    CHECK(allocator.allocate(10, 2) == -1);
    CHECK(allocator.freeMemory(7) == 0);
}
