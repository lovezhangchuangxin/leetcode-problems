#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1652 lang=cpp
 *
 * [1652] 拆炸弹
 */

// @lc code=start
class Solution
{
public:
    vector<int> decrypt(vector<int> &code, int k)
    {
        int n = code.size(), sum = 0;
        vector<int> ans(n, 0);
        if (k == 0)
        {
            return ans;
        }

        bool isPositive = k > 0;
        if (isPositive)
        {
            for (int i = 1; i <= k; i++)
            {
                ans[0] += code[i];
            }
            sum = ans[0];

            for (int i = 1; i < n; i++)
            {
                sum += code[(i + k) % n] - code[i];
                ans[i] = sum;
            }
        }
        else
        {
            for (int i = k + n; i < n; i++)
            {
                ans[0] += code[i];
            }
            sum = ans[0];

            for (int i = 1, j = k + n; i < n; i++, j++)
            {
                sum += code[i - 1] - code[j % n];
                ans[i] = sum;
            }
        }

        return ans;
    }
};
// @lc code=end
