#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        // dp[i] 表示只考虑前 i 个房子能偷到的最大金额
        // 那么 dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1])
        // 注意 dp 从 1 开始，而 nums 从 0 开始
        int a = 0, b = nums[0], c;

        for (int i = 1; i < n; i++)
        {
            c = max(b, a + nums[i]);
            a = b;
            b = c;
        }

        return b;
    }

    // int rob(vector<int> &nums)
    // {
    //     int n = nums.size();
    //     // dp[i] 表示只考虑前 i 个房子能偷到的最大金额
    //     // 那么 dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1])
    //     // 注意 dp 从 1 开始，而 nums 从 0 开始
    //     int *dp = new int[n + 1];
    //     dp[0] = 0;
    //     dp[1] = nums[0];

    //     for (int i = 2; i <= n; i++)
    //     {
    //         dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
    //     }

    //     return dp[n];
    // }
};
// @lc code=end
