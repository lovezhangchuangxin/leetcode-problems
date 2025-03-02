#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=132 lang=cpp
 *
 * [132] 分割回文串 II
 */

// @lc code=start
class Solution
{
public:
    int minCut(string s)
    {
        int n = s.size();
        vector<vector<bool>> isPal(n, vector<bool>(n, false));

        for (int i = 0; i < n; i++)
        {
            isPal[i][i] = true;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j] && (j - i < 2 || isPal[i + 1][j - 1]))
                {
                    isPal[i][j] = true;
                }
            }
        }

        vector<int> dp(n, INT_MAX);
        for (int i = 0; i < n; i++)
        {
            if (isPal[0][i])
            {
                dp[i] = 0;
            }
            else
            {
                for (int j = 0; j < i; j++)
                {
                    if (isPal[j + 1][i])
                    {
                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        return dp[n - 1];
    }
};
// @lc code=end
