#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=643 lang=cpp
 *
 * [643] 子数组最大平均数 I
 */

// @lc code=start
class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int sum = 0, maxx = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        maxx = sum;
        for (int i = k; i < nums.size(); i++)
        {
            sum += nums[i] - nums[i - k];
            maxx = max(maxx, sum);
        }

        return maxx * 1.0 / k;
    }
};
// @lc code=end
