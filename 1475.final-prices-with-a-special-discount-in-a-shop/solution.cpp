#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1475 lang=cpp
 *
 * [1475] 商品折扣后的最终价格
 */

// @lc code=start
class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        int n = prices.size();
        vector<int> ans = prices;
        stack<int> stk; // 栈中存放的是下标
        int index = 0;  // 栈顶元素的下标
        // 从左往右看，栈中的元素是还没有确认折扣的商品下标
        for (int i = 0; i < n; i++)
        {
            int price = prices[i];
            while (!stk.empty() && price <= prices[index = stk.top()])
            {
                stk.pop();
                ans[index] = prices[index] - price; // 价格减去折扣
            }
            stk.push(i);
        }

        return ans;
    }

    // vector<int> finalPrices(vector<int> &prices)
    // {
    //     int n = prices.size();
    //     vector<int> ans = prices;
    //     stack<int> stk; // 栈中存放的是下标
    //     int index = 0;  // 栈顶元素的下标
    //     // 从右往左看，遇到比栈顶元素价格更小的商品，栈顶元素就要出栈，否则就可以享受折扣
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         int price = prices[i];
    //         while (!stk.empty())
    //         {
    //             if (price >= prices[index = stk.top()])
    //             {
    //                 ans[i] = prices[i] - prices[index]; // 价格减去折扣
    //                 break;
    //             }
    //             stk.pop();
    //         }
    //         stk.push(i);
    //     }

    //     return ans;
    // }
};
// @lc code=end
