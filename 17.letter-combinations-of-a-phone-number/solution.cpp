#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution
{
public:
    // 数字到字母的映射
    vector<string> digitMap = {
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };

    vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
        {
            return {};
        }

        vector<string> result;
        dfs(digits, 0, "", result);

        return result;
    }

    void dfs(string &digits, int index, string prefix, vector<string> &result)
    {
        if (index >= digits.size())
        {
            result.push_back(prefix);
            return;
        }

        for (auto c : digitMap[digits[index] - '2'])
        {
            dfs(digits, index + 1, prefix + c, result);
        }
    }
};
// @lc code=end
