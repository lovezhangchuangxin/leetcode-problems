#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2353 lang=cpp
 *
 * [2353] 设计食物评分系统
 */

// @lc code=start
class FoodRatings
{
private:
    unordered_map<string, pair<int, string>> food_map;
    unordered_map<string, set<pair<int, string>>> cuisine_map;

public:
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        for (int i = 0; i < foods.size(); i++)
        {
            auto &food = foods[i];
            auto &cuisine = cuisines[i];
            int rating = ratings[i];
            food_map[food] = {rating, cuisine};
            cuisine_map[cuisine].emplace(-rating, food);
        }
    }

    void changeRating(string food, int newRating)
    {
        auto &[rating, cuisine] = food_map[food];
        auto &st = cuisine_map[cuisine];
        st.erase({-rating, food});
        st.emplace(-newRating, food);
        rating = newRating;
    }

    string highestRated(string cuisine)
    {
        auto &st = cuisine_map[cuisine];
        return st.begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
// @lc code=end
