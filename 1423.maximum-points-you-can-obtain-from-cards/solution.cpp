#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1423 lang=cpp
 *
 * [1423] 可获得的最大点数
 */

// @lc code=start
class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        // 不难看出除去这 k 张卡牌之外的 n - k 张位置必然连续且满足滑动窗口的性质
        // 所以求这 n - k 张卡牌之和的最小值，然后用总和减去这个最小值即可
        int total = 0, sum = 0, minn;
        // 初始化窗口
        for (int i = 0; i < n - k; i++)
        {
            sum += cardPoints[i];
        }
        total = sum;
        minn = sum;

        // 滑动窗口
        for (int i = n - k, j = 0; i < n; i++, j++)
        {
            sum += cardPoints[i] - cardPoints[j];
            total += cardPoints[i];
            minn = min(sum, minn);
        }

        return total - minn;
    }
};
// @lc code=end
