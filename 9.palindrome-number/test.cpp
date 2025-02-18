#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing isPalindrome")
{
    Solution solution = Solution();

    CHECK(solution.isPalindrome(121) == true);
    CHECK(solution.isPalindrome(-121) == false);
    CHECK(solution.isPalindrome(1234567899) == false);
}