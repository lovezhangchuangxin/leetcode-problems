#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum % 2 != 0)
        {
            return false;
        }

        int target = sum / 2;
        int max = *max_element(nums.begin(), nums.end());
        if (max > target)
        {
            return false;
        }
        int n = nums.size();
        vector<vector<bool>> dp(n, vector<bool>(target + 1, false));
        // 初始化
        for (int i = 0; i < n; i++)
        {
            dp[i][0] = true;
        }
        dp[0][nums[0]] = true;
        // 遍历
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j <= target; j++)
            {
                int num = nums[i];
                if (j >= num)
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - num];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n - 1][target];
    }
};
// @lc code=end
