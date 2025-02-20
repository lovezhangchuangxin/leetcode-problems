#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2595 lang=cpp
 *
 * [2595] 奇偶位数
 */

// @lc code=start
class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        const unsigned MASK = 0x55555555;
        return {__builtin_popcount(n & MASK), __builtin_popcount(n & (MASK << 1))};
    }

    // vector<int> evenOddBit(int n)
    // {
    //     vector<int> res(2, 0);
    //     int i = 0;
    //     while (n)
    //     {
    //         res[i] += n & 1;
    //         n >>= 1;
    //         i ^= 1;
    //     }

    //     return res;
    // }

    // vector<int> evenOddBit(int n)
    // {
    //     int even = 0, odd = 0, index = 0;

    //     while (n)
    //     {
    //         if (n & 1)
    //         {
    //             if (index & 1)
    //             {
    //                 odd++;
    //             }
    //             else
    //             {
    //                 even++;
    //             }
    //         }

    //         n = n >> 1;
    //         index++;
    //     }

    //     return {even, odd};
    // }
};
// @lc code=end
