#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2506 lang=cpp
 *
 * [2506] 统计相似字符串对的数目
 */

// @lc code=start
class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        // 我们将每个字符串转为一个 hash 值，然后用 map 记录一下该值出现的次数 n
        // 根据排列组合知识, C(n, 2) 即为同为该值的相似字符串的对数
        int hash, ans = 0;
        unordered_map<int, int> strCnt;
        for (auto &word : words)
        {
            hash = 0;
            // 字符串转 hash，只需要把 26 个字母映射到 32 位的数字即可。
            for (auto &c : word)
            {
                hash |= (1 << (c - 'a'));
            }
            strCnt[hash]++;
        }

        for (auto &p : strCnt)
        {
            if (p.second >= 2)
            {
                ans += (p.second * (p.second - 1)) / 2;
            }
        }

        return ans;
    }
};
// @lc code=end
