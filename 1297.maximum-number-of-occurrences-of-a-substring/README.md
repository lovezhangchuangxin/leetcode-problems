# 子串的最大出现次数

## 统计字母出现次数

对于比较小的集合如 26 个字母集，想要统计各个元素的数量，除了使用 map 之外，还可以考虑数组。

```cpp
int cnt['a' + 26 + 1] = {0};

for (int i = 0; i < s.size(); i++) {
    cnt[s[i] - 'a']++;
}
```

## string_view

`string_view` 是 C++17 中引入的一个新的类，它是一个只读的字符串视图。`string_view` 本身不拥有内存，只是对现有的字符串的一个引用。因此，`string_view` 的创建和销毁的开销都是很小的。

```cpp
string str = "hello";
string_view sv = str;
// 只取前 3 个字符
string_view sv2(str.data(), 3);
```
