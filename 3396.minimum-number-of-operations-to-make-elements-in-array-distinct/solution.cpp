#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=3396 lang=cpp
 *
 * [3396] 使数组元素互不相同所需的最少操作次数
 */

// @lc code=start
class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        set<int> s;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (s.count(nums[i]))
            {
                return i / 3 + 1;
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        return 0;
    }
};
// @lc code=end
