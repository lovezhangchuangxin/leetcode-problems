#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=2296 lang=cpp
 *
 * [2296] 设计一个文本编辑器
 */

// @lc code=start
class TextEditor
{
private:
    // 光标左右侧字符
    string left, right;

    // 获取光标左侧最多10个字符
    string text()
    {
        return left.substr(max((int)left.size() - 10, 0));
    }

public:
    TextEditor()
    {
    }

    void addText(string text)
    {
        left += text;
    }

    int deleteText(int k)
    {
        k = min(k, (int)left.size());
        left.resize(left.size() - k);
        return k;
    }

    string cursorLeft(int k)
    {
        while (k && !left.empty())
        {
            right += left.back();
            left.pop_back();
            k--;
        }

        return text();
    }

    string cursorRight(int k)
    {
        while (k && !right.empty())
        {
            left += right.back();
            right.pop_back();
            k--;
        }

        return text();
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */
// @lc code=end
