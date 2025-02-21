#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1143 lang=cpp
 *
 * [1143] 最长公共子序列
 */

// @lc code=start
class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {

        // dp[i][j] 表示 text1[0..i] 和 text2[0..j] 的最长公共子序列
        // dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + (text1[i] == text2[j]))
        // 更进一步，dp[i][j] = text1[i] == text2[j] ? dp[i-1][j-1] + 1 : max(dp[i-1][j], dp[i][j-1])
        int m = text1.size();
        int n = text2.size();
        int i, j, k;
        int dp[m + 1][n + 1];

        for (i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }
        for (j = 0; j <= n; j++)
        {
            dp[0][j] = 0;
        }

        for (i = 0; i < m; i++)
        {
            k = i + 1;
            for (j = 0; j < n; j++)
            {
                dp[k][j + 1] = text1[i] == text2[j] ? dp[i][j] + 1 : max(dp[i][j + 1], dp[k][j]);
            }
        }

        return dp[m][n];
    }
};
// @lc code=end
