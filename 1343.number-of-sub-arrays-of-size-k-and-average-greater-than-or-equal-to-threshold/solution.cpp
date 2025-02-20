#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1343 lang=cpp
 *
 * [1343] 大小为 K 且平均值大于等于阈值的子数组数目
 */

// @lc code=start
class Solution
{
public:
    int numOfSubarrays(vector<int> &arr, int k, int threshold)
    {
        int sum = 0, count = 0, th = threshold * k;
        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }

        if (sum >= th)
        {
            count++;
        }

        for (int i = k; i < arr.size(); i++)
        {
            sum += arr[i] - arr[i - k];
            if (sum >= th)
            {
                count++;
            }
        }

        return count;
    }
};
// @lc code=end
