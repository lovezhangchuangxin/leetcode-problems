#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2080 lang=cpp
 *
 * [2080] 区间内查询数字的频率
 */

// @lc code=start
class RangeFreqQuery
{
public:
    unordered_map<int, vector<int>> posArr;

    RangeFreqQuery(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            posArr[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value)
    {
        vector<int> &arr = posArr[value];
        if (arr.size() == 0)
        {
            return 0;
        }

        auto i = lower_bound(arr.begin(), arr.end(), left);
        auto j = upper_bound(arr.begin(), arr.end(), right);
        return j - i;
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */
// @lc code=end
