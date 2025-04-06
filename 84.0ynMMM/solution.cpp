#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=84 lang=cpp
 *
 * [84] 柱状图中最大的矩形
 */

// @lc code=start
class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        // 我们依次考虑每个柱子，以这个柱子的高为高的矩形的最大面积。
        // 显然，只需要往两边扩展，直到遇到比这个柱子高的柱子为止。
        // 因此需要找到每个柱子左右两边第一个比它矮的柱子的位置。
        // 可以使用单调递增栈来实现，入栈的时候可以确定左边界，出栈的时候可以确定右边界。
        int n = heights.size();
        int ans = 0;
        vector<int> left(n, -1), right(n, n);
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && heights[s.top()] >= heights[i])
            {
                right[s.top()] = i;
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        for (int i = 0; i < n; i++)
        {
            ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
        }

        return ans;
    }

    // int largestRectangleArea(vector<int> &heights)
    // {
    //     // 我们依次考虑每个柱子，以这个柱子的高为高的矩形的最大面积。
    //     // 显然，只需要往两边扩展，直到遇到比这个柱子高的柱子为止。
    //     // 因此需要找到每个柱子左右两边第一个比它矮的柱子的位置。
    //     // 可以使用两个单调递增栈来实现
    //     int n = heights.size();
    //     int ans = 0;
    //     vector<int> left(n, 0), right(n, 0);
    //     stack<int> s1, s2;
    //     for (int i = 0; i < n; i++)
    //     {
    //         while (!s1.empty())
    //         {
    //             if (heights[i] > heights[s1.top()])
    //             {
    //                 left[i] = s1.top();
    //                 break;
    //             }

    //             s1.pop();
    //         }
    //         if (s1.empty())
    //         {
    //             left[i] = -1;
    //         }
    //         s1.push(i);
    //     }

    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         while (!s2.empty())
    //         {
    //             if (heights[i] > heights[s2.top()])
    //             {
    //                 right[i] = s2.top();
    //                 break;
    //             }

    //             s2.pop();
    //         }
    //         if (s2.empty())
    //         {
    //             right[i] = n;
    //         }
    //         s2.push(i);
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
    //     }

    //     return ans;
    // }
};
// @lc code=end
