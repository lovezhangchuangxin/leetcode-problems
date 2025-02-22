#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2134 lang=cpp
 *
 * [2134] 最少交换次数来组合所有的 1 II
 */

// @lc code=start
class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        // 将所有的 1 放在一起之后本质上就是一个窗口
        // 这个窗口的位置可以滑动，采用滑动窗口的思想
        // 先统计 1 的个数，即为窗口长度
        int n = nums.size(), k = 0;
        for (auto num : nums)
        {
            k += num;
        }

        // 统计窗口中 1 的个数，找到最多的个位 maxx，然后 k - max 即可
        int sum = 0, maxx = 0;
        // 初始化窗口
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        maxx = sum;

        // 滑动窗口，注意由于是循环数组，所以窗口要循环滑动
        // 两次 for 循环避免取模操作
        for (int i = k; i < n; i++)
        {
            sum += nums[i] - nums[i - k];
            maxx = max(maxx, sum);
        }
        for (int i = 0, j = n - k; i < k - 1; i++, j++)
        {
            sum += nums[i] - nums[j];
            maxx = max(maxx, sum);
        }

        return k - maxx;
    }
};
// @lc code=end
