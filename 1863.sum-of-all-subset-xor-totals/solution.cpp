#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1863 lang=cpp
 *
 * [1863] 找出所有子集的异或总和再求和
 */

// @lc code=start
class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        // 对于集合所有元素的某一位 k
        // 假如所有元素的 k 位都为 0，则或，异或都为 0，对异或总和没贡献
        // 假如至少有 1 个元素的 k 位为 1，则或为 1，需要考虑该位对异或总和的贡献
        // 我们直接考虑整个集合而不考虑子集，而且子集相当于在全集中缺失的数的所有位为 0
        // 所以对于其他的 n - 1个数，有 2^(n - 1) 种情况，每种情况可以控制其异或和为 1
        // 所以 k 位的或为 1，则其贡献为 2^(n - 1) * (1 << k)
        int res = 0;
        int n = nums.size();
        for (auto num : nums)
        {
            res |= num;
        }

        return res << (n - 1);
    }
};
// @lc code=end
