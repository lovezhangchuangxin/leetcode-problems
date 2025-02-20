#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2090 lang=cpp
 *
 * [2090] 半径为 k 的子数组平均值
 */

// @lc code=start
class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int len = nums.size();
        vector<int> res(len, -1);
        long long sum = 0, n = 2 * k + 1;

        if (n > len)
        {
            return res;
        }

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        res[k++] = sum / n;
        for (int i = n; i < len; i++)
        {
            sum += (nums[i] - nums[i - n]);
            res[k++] = sum / n;
        }

        return res;
    }
};
// @lc code=end
