#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=3477 lang=cpp
 *
 * [3477] 水果成篮 II
 */

// @lc code=start
class Solution
{
public:
    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        int count = 0;
        for (auto fruit : fruits)
        {
            count++;
            for (int i = 0; i < baskets.size(); i++)
            {
                if (fruit <= baskets[i])
                {
                    baskets[i] = 0;
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};
// @lc code=end
