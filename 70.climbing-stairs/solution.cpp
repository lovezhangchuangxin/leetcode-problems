/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
        {
            return n;
        }

        int a1 = 1, a2 = 2, a3;
        n -= 2;
        while (n--)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }

        return a3;
    }
};
// @lc code=end
