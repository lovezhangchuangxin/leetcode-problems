#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int ans = 0;
        stack<int> stk;
        for (int i = 0; i < height.size(); i++)
        {
            int h = height[i];
            int bottomHeight = 0;
            while (!stk.empty() && h > (bottomHeight = height[stk.top()]))
            {
                stk.pop();
                if (stk.empty())
                {
                    break;
                }
                int left = stk.top();
                int dh = min(h, height[left]) - bottomHeight;
                ans += (i - left - 1) * dh;
            }
            stk.push(i);
        }

        return ans;
    }
};
// @lc code=end
