#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2348 lang=cpp
 *
 * [2348] 全 0 子数组的数目
 */

// @lc code=start
class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        // 长度为 n 的全 0 数组中子数组的个数 count = (n + 1) * n / 2
        int n = nums.size();
        long long zeroSize = 0;
        long long result = 0;
        for (auto num : nums)
        {
            if (num == 0)
            {
                zeroSize++;
            }
            else
            {
                result += (zeroSize + 1) * zeroSize / 2;
                zeroSize = 0;
            }
        }
        result += (zeroSize + 1) * zeroSize / 2;
        return result;
    }
};
// @lc code=end
