#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=368 lang=cpp
 *
 * [368] 最大整除子集
 */

// @lc code=start
class Solution
{
public:
    vector<int> largestDivisibleSubset(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // dp[i] 表示以 nums[i] 结尾的最大整除子集的长度
        vector<int> dp(n, 1);
        // pre[i] 表示 nums[i] 的前驱元素的下标
        vector<int> pre(n, -1);
        int maxSize = 1, maxIndex = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    pre[i] = j;
                }
            }
            if (dp[i] > maxSize)
            {
                maxSize = dp[i];
                maxIndex = i;
            }
        }
        vector<int> ans;
        while (maxIndex != -1)
        {
            ans.push_back(nums[maxIndex]);
            maxIndex = pre[maxIndex];
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end
