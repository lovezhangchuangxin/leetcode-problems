#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

// @lc code=start
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        // x 行，y 列
        int x = row - 1, y = 0;

        while (x >= 0 && y < col)
        {
            if (matrix[x][y] == target)
            {
                return true;
            }
            else if (matrix[x][y] < target)
            {
                y++;
            }
            else
            {
                x--;
            }
        }

        return false;
    }

    // bool searchMatrix(vector<vector<int>> &matrix, int target)
    // {
    //     int row = matrix.size();
    //     int col = matrix[0].size();
    //     int start = 0, end = col - 1;
    //     int left, right, mid;

    //     for (int i = 0; i < row; i++)
    //     {
    //         if (matrix[i][0] > target)
    //         {
    //             return false;
    //         }

    //         if (matrix[i][col - 1] < target)
    //         {
    //             continue;
    //         }

    //         // 二分查找
    //         left = start;
    //         right = end;
    //         while (left <= right)
    //         {
    //             mid = (left + right) / 2;

    //             if (matrix[i][mid] == target)
    //             {
    //                 return true;
    //             }

    //             if (matrix[i][mid] < target)
    //             {
    //                 left = mid + 1;
    //             }
    //             else
    //             {
    //                 end = right;
    //                 right = mid - 1;
    //             }
    //         }
    //     }

    //     return false;
    // }
};
// @lc code=end
