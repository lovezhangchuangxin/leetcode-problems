#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1461 lang=cpp
 *
 * [1461] 检查一个字符串是否包含所有长度为 K 的二进制子串
 */

// @lc code=start
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        if (((signed)s.size() - k + 1) < (1 << k))
        {
            return false;
        }

        // set 存子串的 hash 值
        unordered_set<int> set;
        // 当前字串的 hash 值
        int hash = 0;
        // 掩码，用于取后 k 位
        int mask = (1 << k) - 1;

        // 初始化窗口
        for (int i = 0; i < k; i++)
        {
            hash = hash << 1 | (s[i] & 1);
        }
        set.insert(hash);

        // 滑动窗口
        for (int i = k; i < s.size(); i++)
        {
            hash = hash << 1 | (s[i] & 1);
            hash &= mask;
            set.insert(hash);
        }

        return set.size() == (1 << k);
    }
};
// @lc code=end
