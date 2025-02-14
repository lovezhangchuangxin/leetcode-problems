#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0, r = m * n - 1, mid, val;

        while (l <= r)
        {
            mid = (l + r) >> 1;
            val = matrix[mid / n][mid % n];

            if (val == target)
            {
                return true;
            }
            else if (val < target)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return false;
    }
};
// @lc code=end
