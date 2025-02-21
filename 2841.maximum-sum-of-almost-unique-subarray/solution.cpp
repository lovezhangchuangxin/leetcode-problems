#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2841 lang=cpp
 *
 * [2841] 几乎唯一子数组的最大和
 */

// @lc code=start
class Solution
{
public:
    long long maxSum(vector<int> &nums, int m, int k)
    {
        // 当前子数组和以及最大和
        long long sum = 0, maxx = 0;
        // 窗口内的元素映射，不同元素个数大于等于 m 则说明是几乎唯一子数组
        unordered_map<int, int> s;

        // 初始化窗口
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
            s[nums[i]]++;
        }
        if (s.size() >= m)
        {
            maxx = sum;
        }

        // 滑动窗口
        for (int i = k, j = 0; i < nums.size(); i++, j++)
        {
            sum += (nums[i] - nums[j]);
            s[nums[i]]++;
            if (--s[nums[j]] == 0)
            {
                s.erase(nums[j]);
            }

            if (s.size() >= m)
            {
                maxx = max(maxx, sum);
            }
        }

        return maxx;
    }
};
// @lc code=end
