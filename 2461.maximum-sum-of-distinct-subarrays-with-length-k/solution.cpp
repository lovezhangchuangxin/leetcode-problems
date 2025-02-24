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
        // 用 bitset 来判断某个元素是否存在
        bitset<100001> set;

        // 主要是子数组中的元素要求互不相同，因此使用双指针法
        // 当右指针的元素在 set 中存在时，左指针右移
        // 否则加入 set 中，并判断左右指针之间的元素个数是否为 k
        int l = 0, d = k - 1;
        for (int r = 0; r < nums.size(); r++)
        {
            while (set[nums[r]])
            {
                set[nums[l]] = 0;
                sum -= nums[l];
                l++;
            }

            set[nums[r]] = 1;
            sum += nums[r];
            // 满足条件则取最大值并右移
            if (r - l == d)
            {
                ans = max(ans, sum);
                set[nums[l]] = 0;
                sum -= nums[l];
                l++;
            }
        }

        return ans;
    }

    // long long maximumSubarraySum(vector<int> &nums, int k)
    // {
    //     // 答案以及当前子数组和
    //     long long ans = 0, sum = 0;
    //     // 子数组中每种元素的次数
    //     unordered_map<int, int> cnt;

    //     // 初始化窗口
    //     for (int i = 0; i < k; i++)
    //     {
    //         sum += nums[i];
    //         cnt[nums[i]]++;
    //     }
    //     if (cnt.size() == k)
    //     {
    //         ans = sum;
    //     }

    //     // 滑动窗口
    //     for (int i = k, j = 0; i < nums.size(); i++, j++)
    //     {
    //         sum += nums[i] - nums[j];

    //         // 先加后减
    //         cnt[nums[i]]++;
    //         if (--cnt[nums[j]] == 0)
    //         {
    //             cnt.erase(nums[j]);
    //         }

    //         if (cnt.size() == k)
    //         {
    //             ans = max(ans, sum);
    //         }
    //     }

    //     return ans;
    // }
};
// @lc code=end
