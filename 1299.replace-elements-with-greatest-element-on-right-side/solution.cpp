#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1299 lang=cpp
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
class Solution
{
public:
    vector<int> replaceElements(vector<int> &arr)
    {
        int maxx = -1, temp;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            temp = arr[i];
            arr[i] = maxx;
            maxx = max(maxx, temp);
        }

        return arr;
    }

    // vector<int> replaceElements(vector<int> &arr)
    // {
    //     int maxx = -1;
    //     for (int i = arr.size() - 1; i >= 0; i--)
    //     {
    //         arr[0] = arr[i];
    //         arr[i] = maxx;
    //         maxx = max(maxx, arr[0]);
    //     }

    //     return arr;
    // }
};
// @lc code=end
