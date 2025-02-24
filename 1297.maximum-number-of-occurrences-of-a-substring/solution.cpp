#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1297 lang=cpp
 *
 * [1297] 子串的最大出现次数
 */

// @lc code=start
class Solution
{
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize)
    {
        int n = s.size();
        // 子串不同字母的个数
        short cntSize = 0;
        // 子串中各字母的个数，显然 cntSize <= maxLetters 的字串才有可能满足条件
        char cnt['a' + 30] = {0};
        // 子串出现的次数
        unordered_map<string_view, int> freq;
        // 子串出现的最大次数
        int maxFreq = 0;

        // 注意到某个子串出现了 k 次，则该子串的所有字串也至少出现 k 次。
        // 所以只需要考虑长度为 minSize 的子串即可，窗口长度即为 minSize

        // 初始化窗口
        for (int i = 0; i < minSize; i++)
        {
            if (cnt[s[i]]++ == 0)
            {
                cntSize++;
            }
        }
        if (cntSize <= maxLetters)
        {
            freq[string_view(s.data(), minSize)]++;
            maxFreq = 1;
        }

        for (int i = minSize, j = 0; i < s.size(); i++)
        {
            // 先加
            if (cnt[s[i]]++ == 0)
            {
                cntSize++;
            }
            // 再减
            if (--cnt[s[j++]] == 0)
            {
                cntSize--;
            }

            if (cntSize <= maxLetters)
            {
                string_view sub = string_view(s.data() + j, minSize);
                if (++freq[sub] > maxFreq)
                {
                    maxFreq++;
                }
            }
        }

        return maxFreq;
    }

    // int maxFreq(string s, int maxLetters, int minSize, int maxSize)
    // {
    //     int n = s.size();
    //     // 子串中各字母的个数，显然 cnt.size() <= maxLetters 的子串才有可能满足条件
    //     unordered_map<char, int> cnt;
    //     // 长度为 minSize 的子串中各字母的个数
    //     unordered_map<char, int> minCnt;
    //     // 子串出现的次数
    //     unordered_map<string, int> freq;
    //     // 子串出现的最大次数
    //     int maxFreq = 0;

    //     // 初始化窗口
    //     for (int i = 0; i < minSize; i++)
    //     {
    //         cnt[s[i]]++;
    //         minCnt[s[i]]++;
    //     }
    //     if (cnt.size() <= maxLetters)
    //     {
    //         freq[s.substr(0, minSize)]++;
    //         maxFreq = 1;
    //     }

    //     // 滑动窗口
    //     for (int i = 0; i <= n - minSize; i++)
    //     {
    //         for (int j = i + minSize, k = minSize + 1; j < n && j < i + maxSize; j++, k++)
    //         {
    //             cnt[s[j]]++;
    //             if (cnt.size() <= maxLetters)
    //             {
    //                 // 一次最多只能大 1
    //                 if (++freq[s.substr(i, k)] > maxFreq)
    //                 {
    //                     maxFreq++;
    //                 }
    //             }
    //         }

    //         if (i < n - minSize)
    //         {
    //             minCnt[s[i + minSize]]++;
    //             if (--minCnt[s[i]] == 0)
    //             {
    //                 minCnt.erase(s[i]);
    //             }
    //             cnt = minCnt;
    //             if (cnt.size() <= maxLetters)
    //             {
    //                 // 一次最多只能大 1
    //                 if (++freq[s.substr(i + 1, minSize)] > maxFreq)
    //                 {
    //                     maxFreq++;
    //                 }
    //             }
    //         }
    //     }

    //     return maxFreq;
    // }
};
// @lc code=end
