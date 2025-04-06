#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        // 双指针，从两端向中间收缩，每次移动最短的指针
        // 这是因为容器的高度由最短的指针决定，而移动最长的指针不可能增加容器的高度，
        // 反而会减少容器的宽度，导致容量减小。
        // 也就是说，最短的指针为边界的所有容器中，当前情况是容量最大的。
        // 因此不需要再考虑这个指针了，直接移动短的指针即可。
        int left = 0, right = height.size() - 1;
        int ans = 0;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                ans = max(ans, height[left] * (right - left));
                left++;
            }
            else
            {
                ans = max(ans, height[right] * (right - left));
                right--;
            }
        }
        return ans;
    }
};
// @lc code=end
