#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0, v;
        for (int i = 1; i < prices.size(); i++)
        {
            v = prices[i] - prices[i - 1];
            if (v > 0)
            {
                max += v;
            }
        }

        return max;
    }
};
// @lc code=end
