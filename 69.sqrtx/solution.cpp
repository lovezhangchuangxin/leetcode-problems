#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0, r = 46340, mid, mul;
        while (l <= r)
        {
            mid = (l + r) / 2;
            mul = mid * mid;
            if (mul == x)
            {
                return mid;
            }
            else if (mul > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return r;
    }
};
// @lc code=end
