#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2379 lang=cpp
 *
 * [2379] 得到 K 个黑块的最少涂色次数
 */

// @lc code=start
class Solution
{
public:
    int minimumRecolors(string blocks, int k)
    {
        // 窗口内白块的数量以及最小值
        int w = 0, minn = 0;
        // 初始化窗口
        for (int i = 0; i < k; i++)
        {
            w += blocks[i] == 'W';
        }
        minn = w;
        // 滑动窗口
        for (int i = k; i < blocks.length(); i++)
        {
            w += (blocks[i] == 'W') - (blocks[i - k] == 'W');
            minn = min(minn, w);
        }

        return minn;
    }
};
// @lc code=end
