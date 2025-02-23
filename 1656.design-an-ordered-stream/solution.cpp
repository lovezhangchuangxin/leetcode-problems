#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1656 lang=cpp
 *
 * [1656] 设计有序流
 */

// @lc code=start
class OrderedStream
{
public:
    int ptr;
    vector<string> stream;

    OrderedStream(int n) : ptr(1), stream(n + 2)
    {
    }

    vector<string> insert(int idKey, string value)
    {
        vector<string> res;
        stream[idKey] = value;

        while (!stream[ptr].empty())
        {
            res.push_back(stream[ptr++]);
        }

        return res;
    }
};

// class OrderedStream
// {
// public:
//     int ptr = 1;
//     unordered_map<int, string> map;

//     OrderedStream(int n)
//     {
//     }

//     vector<string> insert(int idKey, string value)
//     {
//         if (ptr != idKey)
//         {
//             map[idKey] = value;
//             return {};
//         }

//         vector<string> res{value};
//         ptr++;
//         unordered_map<int, string>::iterator p;
//         while ((p = map.find(ptr)) != map.end())
//         {
//             res.push_back(p->second);
//             ptr++;
//         }

//         return res;
//     }
// };

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
// @lc code=end
