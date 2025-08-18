#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=152 lang=cpp
 *
 * [152] 乘积最大子数组
 */

// @lc code=start
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        // 假设以 nums[i] 结尾的连续子数组的最大乘积为 dmax[i]，最小乘积为 dmin[i]
        // 那么：
        // dmax[i + 1] = max(dmax[i] * nums[i], dmin[i] * nums[i], nums[i])
        // dmin[i + 1] = min(dmax[i] * nums[i], dmin[i] * nums[i], nums[i])
        int n = nums.size();
        vector<int> dmax(n), dmin(n);
        dmax[0] = dmin[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            int num = nums[i];
            int a = dmax[i - 1] * num, b = dmin[i - 1] * num;
            dmax[i] = max(a, max(b, num));
            dmin[i] = min(a, min(b, num));
        }
        return *max_element(dmax.begin(), dmax.end());
    }
};
// @lc code=end
