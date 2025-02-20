#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1456 lang=cpp
 *
 * [1456] 定长子串中元音的最大数目
 */

// @lc code=start
class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int num = 0, maxx = 0;
        for (int i = 0; i < k; i++)
        {
            num += isVowel(s[i]);
        }

        maxx = num;
        for (int i = k; i < s.length(); i++)
        {
            num += isVowel(s[i]) - isVowel(s[i - k]);
            maxx = max(maxx, num);
        }

        return maxx;
    }

    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
// @lc code=end
