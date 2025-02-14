#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1552 lang=cpp
 *
 * [1552] 两球之间的磁力
 */

// @lc code=start
class Solution
{
public:
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int l = 1, r = (position[position.size() - 1] - position[0]) / (m - 1), mid, ans = -1;
        while (l <= r)
        {
            mid = (l + r) >> 1;
            if (check(mid, position, m))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return ans;
    }

    bool check(int k, const vector<int> &position, int m)
    {
        int cnt = 1, pre = position[0];
        for (int i = 0; i < position.size(); i++)
        {
            if (position[i] - pre >= k)
            {
                pre = position[i];
                cnt++;
            }
        }

        return cnt >= m;
    }
};
// @lc code=end
