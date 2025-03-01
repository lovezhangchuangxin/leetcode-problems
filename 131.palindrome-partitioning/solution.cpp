#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution
{
public:
    vector<vector<string>> partition(string s)
    {

        int n = s.length();
        vector<vector<string>> ans;
        vector<string> path;

        auto dfs = [&](auto &&dfs, int i)
        {
            if (i == n)
            {
                ans.emplace_back(path);
                return;
            }
            for (int j = i, k = 1; j < n; j++, k++)
            {
                if (isPalindrome(s, i, j))
                {
                    path.push_back(s.substr(i, k));
                    dfs(dfs, j + 1);
                    path.pop_back();
                }
            }
        };

        dfs(dfs, 0);
        return ans;
    }

    bool isPalindrome(string &s, int left, int right)
    {
        while (left < right)
        {
            if (s[left++] != s[right--])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
