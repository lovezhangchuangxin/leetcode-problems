#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=403 lang=cpp
 *
 * [403] 青蛙过河
 */

// @lc code=start
class Solution
{
public:
    // 跳到第 i 个 stone 需要跳跃的单位
    vector<int> dp;
    // stone 编号到位置的映射
    unordered_map<int, int> stone2pos;
    // stone 位置跳跃失败的映射
    unordered_map<int, bool> stone2fail;

    bool canCross(vector<int> &stones)
    {
        dp.resize(stones.size());
        for (int i = 0; i < stones.size(); i++)
        {
            stone2pos[stones[i]] = i;
        }

        dp[0] = 0;
        return dfs(stones, 0);
    }

    bool dfs(vector<int> &stones, int i)
    {
        if (i == stones.size() - 1)
        {
            return true;
        }

        // 走到第 i 步跳跃的单位
        int k = dp[i], k2;
        for (int j = 1; j >= -1; j--)
        {
            k2 = k + j;
            if (k2 <= 0)
            {
                continue;
            }

            // 下一个 stone 的位置
            auto next = stone2pos.find(stones[i] + k2);
            if (next == stone2pos.end())
            {
                continue;
            }

            if (stone2fail[next->second << 20 | k2])
            {
                continue;
            }

            // 跳到下一个 stone
            dp[next->second] = k2;
            if (dfs(stones, next->second))
            {
                return true;
            }
            else
            {
                stone2fail[next->second << 20 | k2] = true;
            }
        }

        return false;
    }
};
// @lc code=end
