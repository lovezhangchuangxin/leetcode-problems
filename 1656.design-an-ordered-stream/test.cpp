#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing OrderedStream")
{
    OrderedStream os(5);

    CHECK(os.insert(3, "cc") == vector<string>{});
    CHECK(os.insert(1, "aa") == vector<string>{"aa"});
    CHECK(os.insert(2, "bb") == vector<string>{"bb", "cc"});
    CHECK(os.insert(5, "ee") == vector<string>{});
    CHECK(os.insert(4, "dd") == vector<string>{"dd", "ee"});
}
