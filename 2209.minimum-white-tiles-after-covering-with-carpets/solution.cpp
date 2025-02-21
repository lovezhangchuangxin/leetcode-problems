#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2209 lang=cpp
 *
 * [2209] 用地毯覆盖后的最少白色砖块
 */

// @lc code=start
class Solution
{
public:
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen)
    {
        // 砖块数
        int n = floor.size();
        if (n <= numCarpets * carpetLen)
        {
            return 0;
        }
        // 当前统计的砖块数
        int sum = carpetLen;

        // d[j] 表示在 n 个地毯覆盖前 j 个砖块的最少白色砖块数。
        // f[j] 表示在 n - 1 个地毯覆盖前 j 个砖块的最少白色砖块数。
        int d[n + 1];
        int f[n + 1];
        // 地毯数为 0 时
        d[0] = 0;
        for (int j = 1; j <= n; j++)
        {
            d[j] = d[j - 1] + (floor[j - 1] == '1');
        }
        // d 赋值给 f
        memcpy(f, d, sizeof(d));

        // i 为地毯数
        for (int i = 1; i <= numCarpets; i++)
        {
            // j 为砖块数
            for (int j = sum; j <= n; j++)
            {
                d[j] = min(d[j - 1] + (floor[j - 1] == '1'), f[j - carpetLen]);
            }
            memcpy(f, d, sizeof(d));
            sum += carpetLen;
        }

        return d[n];
    }

    // int minimumWhiteTiles(string floor, int numCarpets, int carpetLen)
    // {
    //     // 砖块数
    //     int n = floor.size();
    //     // 地毯数 * 地毯长度大于等于砖块数时，说明能全部覆盖，返回 0
    //     if (n <= numCarpets * carpetLen)
    //     {
    //         return 0;
    //     }

    //     // 我们遍历地毯，假设当前是第 n 个地毯
    //     // d[j] 表示在 n 个地毯覆盖前 j 个砖块的最少白色砖块数。
    //     // f[j] 表示在 n - 1 个地毯覆盖前 j 个砖块的最少白色砖块数。
    //     // 每一轮遍历结束时，将 d 赋值给 f 即可。遍历完所有地毯，d[n] 即为答案。
    //     int d[n + 1];
    //     int f[n + 1];

    //     // 地毯数为 0 时
    //     d[0] = 0;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         d[j] = d[j - 1] + (floor[j - 1] == '1');
    //     }
    //     // d 赋值给 f
    //     memcpy(f, d, sizeof(d));

    //     // i 为地毯数
    //     for (int i = 1; i <= numCarpets; i++)
    //     {
    //         // j 为砖块数，i * numCarpets > j 则说明可以全部覆盖，不考虑，所以从 i * numCarpets 开始
    //         for (int j = i * numCarpets; j <= n; j++)
    //         {
    //             d[j] = min(d[j - 1] + (floor[j - 1] == '1'), f[j - carpetLen]);
    //         }
    //         memcpy(f, d, sizeof(d));
    //     }

    //     return d[n];
    // }

    // int minimumWhiteTiles(string floor, int numCarpets, int carpetLen)
    // {
    //     // dp[i][j] 表示前 i 个地毯覆盖到第 j 个砖块的最少白色砖块数，答案即为 dp[numCarpets][floor.size() - 1]
    //     vector<vector<int>> dp(numCarpets + 1, vector<int>(floor.size(), 0x3f3f3f3f));
    //     int floorLen = floor.size();
    //     int floorStart = carpetLen;

    //     // 考虑最后一个砖块是否被覆盖
    //     // 如果被覆盖，则最后的 carpetLen 个砖块都会被覆盖，因此不需要考虑最后的 carpetLen 个砖块中是否有白色砖块
    //     // 如果没被覆盖，则最少的白色砖块数为 dp[i][j - 1] + (floor[j] == '1')
    //     // 取两者的最小值，所以转移方程为：
    //     // dp[i][j] = min(dp[i-1][j-carpetLen], dp[i][j-1] + (floor[j] == '1'))

    //     // 考虑边界条件，当 i = 0，即只有 0 个地毯时，那么 dp[0][j] 就是前 j 个砖块中白色砖块的数量，也就是前缀和
    //     dp[0][0] = floor[0] == '1';
    //     for (int j = 1; j < floorLen; j++)
    //     {
    //         dp[0][j] = dp[0][j - 1] + (floor[j] == '1');
    //     }

    //     for (int i = 1; i <= numCarpets; i++)
    //     {
    //         dp[i][min(floorStart - 1, floorLen - 1)] = 0;
    //         for (int j = floorStart; j < floorLen; j++)
    //         {
    //             dp[i][j] = min(dp[i][j - 1] + (floor[j] == '1'), dp[i - 1][j - carpetLen]);
    //         }
    //         floorStart += carpetLen;
    //     }

    //     return dp[numCarpets][floorLen - 1];
    // }
};
// @lc code=end
