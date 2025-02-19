#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=624 lang=cpp
 *
 * [624] 数组列表中的最大距离
 */

// @lc code=start
class Solution
{
public:
    int maxDistance(vector<vector<int>> &arrays)
    {
        int minn = arrays[0].front(), maxx = arrays[0].back(), dis = 0;
        for (int i = 1; i < arrays.size(); i++)
        {
            dis = max(dis, max(abs(arrays[i].front() - maxx), abs(arrays[i].back() - minn)));
            minn = min(minn, arrays[i].front());
            maxx = max(maxx, arrays[i].back());
        }

        return dis;
    }

    // int maxDistance(vector<vector<int>> &arrays)
    // {
    //     int minn, maxx, dis;

    //     minn = minIndex(arrays);
    //     maxx = maxIndex(arrays, minn);
    //     dis = abs(arrays[minn].front() - arrays[maxx].back());

    //     maxx = maxIndex(arrays);
    //     minn = minIndex(arrays, maxx);
    //     dis = max(dis, abs(arrays[minn].front() - arrays[maxx].back()));

    //     return dis;
    // }

    // /**
    //  * 求最小值对应的数组的下标
    //  */
    // int minIndex(vector<vector<int>> &arrays, int ignore = -1)
    // {
    //     int val = INT_MAX;
    //     int index = 0;

    //     for (int i = 0; i < arrays.size(); i++)
    //     {
    //         if (i != ignore && arrays[i].front() < val)
    //         {
    //             val = arrays[i].front();
    //             index = i;
    //         }
    //     }

    //     return index;
    // }

    // /**
    //  * 求最大值对应的数组的下标
    //  */
    // int maxIndex(vector<vector<int>> &arrays, int ignore = -1)
    // {
    //     int val = INT_MIN;
    //     int index = 0;

    //     for (int i = 0; i < arrays.size(); i++)
    //     {
    //         if (i != ignore && arrays[i].back() > val)
    //         {
    //             val = arrays[i].back();
    //             index = i;
    //         }
    //     }

    //     return index;
    // }
};
// @lc code=end
