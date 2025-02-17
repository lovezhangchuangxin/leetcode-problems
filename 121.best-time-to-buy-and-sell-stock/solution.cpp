#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minn = INT_MAX, maxx = 0;
        for (auto i : prices)
        {
            minn = min(i, minn);
            maxx = max(i - minn, maxx);
        }

        return maxx;
    }
};
// @lc code=end
