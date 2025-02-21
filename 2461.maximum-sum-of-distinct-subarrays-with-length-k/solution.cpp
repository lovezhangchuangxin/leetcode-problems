#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2461 lang=cpp
 *
 * [2461] 长度为 K 子数组中的最大和
 */

// @lc code=start
class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        // 答案以及当前子数组和
        long long ans = 0, sum = 0;
        // 子数组中每种元素的次数
        unordered_map<int, int> cnt;

        // 初始化窗口
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
            cnt[nums[i]]++;
        }
        if (cnt.size() == k)
        {
            ans = sum;
        }

        // 滑动窗口
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];

            // 先加后减
            cnt[nums[i]]++;
            if (--cnt[nums[i - k]] == 0)
            {
                cnt.erase(nums[i - k]);
            }

            if (cnt.size() == k)
            {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};
// @lc code=end
