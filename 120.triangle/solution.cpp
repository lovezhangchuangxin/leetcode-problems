#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[1] = triangle[0][0];
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j >= 0; j--)
            {
                dp[j + 1] = min(dp[j], dp[j + 1]) + triangle[i][j];
            }
        }
        return *min_element(dp.begin(), dp.end());
    }
};
// @lc code=end
