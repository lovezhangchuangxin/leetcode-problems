#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int len = nums1.size() + nums2.size();
        if (len % 2 == 1)
        {
            return getKthElement(nums1, nums2, (len + 1) / 2);
        }
        else
        {
            return (getKthElement(nums1, nums2, len / 2) + getKthElement(nums1, nums2, len / 2 + 1)) / 2.0;
        }
    }

    /**
     * 返回第 k 小的元素
     */
    int getKthElement(const vector<int> &nums1, const vector<int> &nums2, int k)
    {
        // 边界情况
        int m = nums1.size();
        int n = nums2.size();
        int index1 = 0, index2 = 0;

        while (true)
        {
            if (index1 == m)
            {
                return nums2[index2 + k - 1];
            }

            if (index2 == n)
            {
                return nums1[index1 + k - 1];
            }

            if (k == 1)
            {
                return min(nums1[index1], nums2[index2]);
            }

            int newIndex1 = min(index1 + k / 2 - 1, m - 1);
            int newIndex2 = min(index2 + k / 2 - 1, n - 1);
            int p1 = nums1[newIndex1];
            int p2 = nums2[newIndex2];
            if (p1 <= p2)
            {
                k -= newIndex1 - index1 + 1;
                index1 = newIndex1 + 1;
            }
            else
            {
                k -= newIndex2 - index2 + 1;
                index2 = newIndex2 + 1;
            }
        }
    }
};
// @lc code=end
