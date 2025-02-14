#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int *dp = new int[n + 1];

        dp[0] = 0;
        for (int j = 1; j <= n; j++)
        {
            dp[j] = dp[j - 1] + grid[0][j - 1];
        }

        dp[0] = INT_MAX;
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                dp[j + 1] = min(dp[j], dp[j + 1]) + grid[i][j];
            }
        }

        return dp[n];
    }

    // int minPathSum(vector<vector<int>> &grid)
    // {
    //     int m = grid.size();
    //     int n = grid[0].size();
    //     vector<vector<int>> dp(m, vector<int>(n));

    //     dp[0][0] = grid[0][0];
    //     // 边界
    //     for (int i = 1; i < n; i++)
    //     {
    //         dp[0][i] = grid[0][i] + dp[0][i - 1];
    //     }

    //     for (int i = 1; i < m; i++)
    //     {
    //         dp[i][0] = grid[i][0] + dp[i - 1][0];
    //     }

    //     for (int i = 1; i < m; i++)
    //     {
    //         for (int j = 1; j < n; j++)
    //         {
    //             dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
    //         }
    //     }

    //     return dp[m - 1][n - 1];
    // }
};
// @lc code=end
