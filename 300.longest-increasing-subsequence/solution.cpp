#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        // 我们使用 d 记录每种长度的递增子序列的末尾元素，显然 d 是递增的。
        // 对于每个元素 nums[i]，我们使用二分查找在 d 中找到第一个大于 nums[i] 的元素 d[j]，
        // 这说明 nums[i] 可以替换 d[j]，从而使得 d 中的元素更小，
        int n = nums.size();
        vector<int> d(n, 0);
        int len = 1; // d 的长度
        d[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            auto it = lower_bound(d.begin(), d.begin() + len, nums[i]);
            int pos = it - d.begin();
            d[pos] = nums[i];
            if (pos == len)
            {
                len++;
            }
        }

        return len;
    }

    // int lengthOfLIS(vector<int> &nums)
    // {
    //     // 设 dp[i] 表示数组的前 i 个元素且以 i 结尾的最长递增子序列的长度。
    //     // 显然，dp[i] 至少为 1
    //     int n = nums.size();
    //     vector<int> dp(n, 1);
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < i; j++)
    //         {
    //             if (nums[i] <= nums[j])
    //             {
    //                 continue;
    //             }

    //             dp[i] = max(dp[i], dp[j] + 1);
    //         }
    //     }

    //     return *max_element(dp.begin(), dp.end());
    // }
};
// @lc code=end
