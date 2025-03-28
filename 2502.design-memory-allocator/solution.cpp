#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2502 lang=cpp
 *
 * [2502] 设计内存分配器
 */

// @lc code=start
class Allocator
{
private:
    int n;
    vector<int> memory;

public:
    Allocator(int n) : n(n), memory(n, 0)
    {
    }

    int allocate(int size, int mID)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (memory[i])
            {
                count = 0;
                continue;
            }

            count++;
            if (count == size)
            {
                for (int j = i - size + 1; j <= i; j++)
                {
                    memory[j] = mID;
                }
                return i - size + 1;
            }
        }

        return -1;
    }

    int freeMemory(int mID)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (memory[i] == mID)
            {
                memory[i] = 0;
                count++;
            }
        }

        return count;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */
// @lc code=end
