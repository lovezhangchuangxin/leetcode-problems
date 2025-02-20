#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1052 lang=cpp
 *
 * [1052] 爱生气的书店老板
 */

// @lc code=start
class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        // 窗口内的使用技能而增加的顾客满意数，以及最大值
        int num = 0, maxx = 0;
        // 不使用技能总的顾客满意数
        int total = 0;

        // 初始化窗口
        for (int i = 0; i < minutes; i++)
        {
            total += grumpy[i] ? 0 : customers[i];
            num += grumpy[i] ? customers[i] : 0;
        }

        maxx = num;
        // 滑动窗口
        for (int i = minutes; i < customers.size(); i++)
        {
            total += grumpy[i] ? 0 : customers[i];
            num += (grumpy[i] ? customers[i] : 0) - (grumpy[i - minutes] ? customers[i - minutes] : 0);
            maxx = max(maxx, num);
        }

        return total + maxx;
    }
};
// @lc code=end
