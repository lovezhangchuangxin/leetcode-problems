#include <bits/stdc++.h>

using namespace std;

/*
 * @lc app=leetcode.cn id=1206 lang=cpp
 *
 * [1206] 设计跳表
 */

// @lc code=start
constexpr int MAX_LEVEL = 32;
constexpr double P_FACTOR = 0.5;

// 线性同余法生成 0 到 1 之间的伪随机数
class Random
{
private:
    double seed;

public:
    Random(int _seed) : seed(_seed)
    {
    }

    double next()
    {
        seed = fmod(seed * 9301 + 49297, 233280);
        return seed / 233280;
    }
};

class SkipListNode
{
public:
    int val;
    vector<SkipListNode *> nexts;

    SkipListNode(int _val, int _level = MAX_LEVEL) : val(_val), nexts(_level, nullptr)
    {
    }
};

class Skiplist
{
private:
    // 头指针
    SkipListNode *head;
    // 当前最大层数
    int level;
    // 伪随机数生成器
    Random random;

public:
    Skiplist() : head(new SkipListNode(-1)), level(0), random(63)
    {
    }

    bool search(int target)
    {
        SkipListNode *cur = head;
        for (int i = level - 1; i >= 0; i--)
        {
            while (cur->nexts[i] && cur->nexts[i]->val < target)
            {
                cur = cur->nexts[i];
            }
        }

        cur = cur->nexts[0];
        if (cur && cur->val == target)
        {
            return true;
        }

        return false;
    }

    void add(int num)
    {
        SkipListNode *cur = head;
        // update[i] 表示第 i 层中小于 num 的最大节点, 至少为 head
        vector<SkipListNode *> update(MAX_LEVEL, head);

        for (int i = level - 1; i >= 0; i--)
        {
            while (cur->nexts[i] && cur->nexts[i]->val < num)
            {
                cur = cur->nexts[i];
            }
            update[i] = cur;
        }

        int newLevel = randomLevel();
        level = max(level, newLevel);
        SkipListNode *node = new SkipListNode(num, newLevel);

        for (int i = 0; i < newLevel; i++)
        {
            node->nexts[i] = update[i]->nexts[i];
            update[i]->nexts[i] = node;
        }
    }

    bool erase(int num)
    {
        SkipListNode *cur = head;
        // update[i] 表示第 i 层中小于 num 的最大节点, 至少为 head
        vector<SkipListNode *> update(MAX_LEVEL, head);

        for (int i = level - 1; i >= 0; i--)
        {
            while (cur->nexts[i] && cur->nexts[i]->val < num)
            {
                cur = cur->nexts[i];
            }
            update[i] = cur;
        }

        cur = cur->nexts[0];
        if (!cur || cur->val != num)
        {
            return false;
        }

        // 每一层删除该节点，注意，某些层可能没有该节点
        for (int i = 0; i < level; i++)
        {
            // 某一层不存在该节点，则后面的层也不会存在，直接跳过即可
            if (update[i]->nexts[i] != cur)
            {
                break;
            }

            update[i]->nexts[i] = cur->nexts[i];
        }

        delete cur;

        // 更新最大层数
        while (level > 1 && !head->nexts[level - 1])
        {
            level--;
        }
        return true;
    }

    int randomLevel()
    {
        int lv = 1;
        while (random.next() < P_FACTOR && lv < MAX_LEVEL)
        {
            lv++;
        }
        return lv;
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */
// @lc code=end
