#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1472 lang=cpp
 *
 * [1472] 设计浏览器历史记录
 */

// @lc code=start
class BrowserHistory
{
private:
    vector<string> history;
    int cur;

public:
    BrowserHistory(string homepage)
    {
        cur = 0;
        history.push_back(homepage);
    }

    void visit(string url)
    {
        cur++;
        while (history.size() > cur)
        {
            history.pop_back();
        }
        history.push_back(url);
    }

    string back(int steps)
    {
        cur = max(cur - steps, 0);
        return history[cur];
    }

    string forward(int steps)
    {
        cur = min(cur + steps, (int)history.size() - 1);
        return history[cur];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
// @lc code=end
