#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1287 lang=cpp
 *
 * [1287] 有序数组中出现次数超过25%的元素
 */

// @lc code=start
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int n = arr.size();
        // 目标需要出现的最少次数
        int num = (n >> 2) + 1;
        int l, r, mid, t;

        for (int i = 0; i < n; i += num)
        {
            t = arr[i];
            l = i + 1;
            r = min(n - 1, i + num - 1);
            while (l <= r)
            {
                mid = (l + r) >> 1;
                if (arr[mid] == t)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (l >= num && arr[l - num] == t)
            {
                return t;
            }
        }

        return arr[0];
    }
};
// @lc code=end
