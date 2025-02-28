#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "solution.cpp"

TEST_CASE("testing FoodRatings")
{
    vector<string> foods = {"apple", "banana", "cherry"};
    vector<string> cuisines = {"fruit", "fruit", "fruit"};
    vector<int> ratings = {1, 2, 3};
    FoodRatings *obj = new FoodRatings(foods, cuisines, ratings);
    obj->changeRating("apple", 4);
    CHECK(obj->highestRated("fruit") == "apple");
    obj->changeRating("banana", 5);
    CHECK(obj->highestRated("fruit") == "banana");
    obj->changeRating("cherry", 6);
    CHECK(obj->highestRated("fruit") == "cherry");
    obj->changeRating("apple", 7);
    CHECK(obj->highestRated("fruit") == "apple");
}