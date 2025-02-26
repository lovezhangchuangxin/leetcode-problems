#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing BrowserHistory")
{
    BrowserHistory *obj = new BrowserHistory("leetcode.com");
    obj->visit("google.com");
    obj->visit("facebook.com");
    obj->visit("youtube.com");
    CHECK(obj->back(1) == "facebook.com");
    CHECK(obj->back(1) == "google.com");
    CHECK(obj->forward(1) == "facebook.com");
    obj->visit("linkedin.com");
    CHECK(obj->forward(2) == "linkedin.com");
    CHECK(obj->back(2) == "google.com");
    CHECK(obj->back(7) == "leetcode.com");
}