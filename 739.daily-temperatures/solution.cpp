#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=739 lang=cpp
 *
 * [739] 每日温度
 */

// @lc code=start
class Solution
{
public:
    // vector<int> dailyTemperatures(vector<int> &temperatures)
    // {
    //     int n = temperatures.size();
    //     vector<int> ans(n, 0);
    //     stack<int> stk;
    //     int index = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int t = temperatures[i];
    //         while (!stk.empty() && t > temperatures[index = stk.top()])
    //         {
    //             stk.pop();
    //             ans[index] = i - index;
    //         }
    //         stk.push(i);
    //     }

    //     return ans;
    // }

    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> stk;
        int index = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int t = temperatures[i];
            while (!stk.empty() && t >= temperatures[index = stk.top()])
            {
                stk.pop();
            }
            if (!stk.empty())
            {
                ans[i] = index - i;
            }
            stk.push(i);
        }

        return ans;
    }
};
// @lc code=end
