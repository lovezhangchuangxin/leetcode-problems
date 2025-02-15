#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 */

// @lc code=start
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1);

        for (int i = 1; i <= n; i++)
        {
            int minn = INT_MAX;
            int j = 1;
            int jj = 1;
            do
            {
                minn = min(minn, dp[i - jj]);
                j++;
            } while ((jj = j * j) <= i);
            dp[i] = 1 + minn;
        }

        return dp[n];
    }
};
// @lc code=end
