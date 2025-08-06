#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=3479 lang=cpp
 *
 * [3479] 水果成篮 III
 */

// @lc code=start
class Solution
{
public:
    int segment[400007];
    vector<int> baskets;

    int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
    {
        this->baskets = baskets;
        int n = baskets.size();
        int count = 0;
        this->build(1, 0, n - 1);
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = n - 1, res = -1;
            while (l <= r)
            {
                int mid = (l + r) >> 1;
                if (this->query(1, 0, n - 1, l, mid) >= fruits[i])
                {
                    res = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (res != -1 && baskets[res] >= fruits[i])
            {
                this->update(1, 0, n - 1, res, INT_MIN);
            }
            else
            {
                count++;
            }
        }
        return count;
    }

    // 构造线段树，区间最大
    void build(int p, int l, int r)
    {
        // 叶子节点
        if (l >= r)
        {
            this->segment[p] = this->baskets[l];
            return;
        }

        // 递归构造左右子节点
        int mid = (l + r) >> 1;
        this->build(p << 1, l, mid);
        this->build(p << 1 | 1, mid + 1, r);
        // 当前节点的值是左右子节点的最大值
        this->segment[p] = max(this->segment[p << 1], this->segment[p << 1 | 1]);
    }

    // 查询某个区间的最大值
    int query(int p, int l, int r, int ql, int qr)
    {
        // 当前区间和查询区间不重叠，为了不影响查询最大值，返回最小值
        if (l > qr || r < ql)
        {
            return INT_MIN;
        }

        // 查询区间完全包含当前区间，直接返回当前节点的值
        if (l >= ql && r <= qr)
        {
            return this->segment[p];
        }

        // 部分重叠，左右递归找
        int mid = (l + r) >> 1;
        int lMax = query(p << 1, l, mid, ql, qr);
        int rMax = query(p << 1 | 1, mid + 1, r, ql, qr);
        return max(lMax, rMax);
    }

    void update(int p, int l, int r, int pos, int val)
    {
        if (l >= r)
        {
            this->segment[p] = val;
            return;
        }

        int mid = (l + r) >> 1;
        if (pos <= mid)
        {
            this->update(p << 1, l, mid, pos, val);
        }
        else
        {
            this->update(p << 1 | 1, mid + 1, r, pos, val);
        }
        this->segment[p] = max(this->segment[p << 1], this->segment[p << 1 | 1]);
    }
};
// @lc code=end
