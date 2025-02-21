# 几乎唯一子数组的最大和

考察到 `unordered_map` 的用法。

当使用 `[]` 访问一个不存在的 key 时，会自动插入这个键，并将其对应的值初始化为该类型的默认值。对于 int 类型，默认值是 0。

如果想要判断一个 key 是否存在，可以使用 `count` 方法。

如果想要访问一个 key，但不想插入这个 key，可以使用 `find` 方法。

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> s;
    int a = 5;

    std::cout << s.count(a) << std::endl;  // 输出: 0

    // 使用find访问不存在的键a
    if (s.find(a) == s.end()) {
        std::cout << "a not found" << std::endl;  // 输出: a not found
    }

    // 访问不存在的键a
    std::cout << s[a] << std::endl;  // 输出: 0

    // 现在a已经被插入到unordered_map中
    std::cout << s.size() << std::endl;  // 输出: 1

    return 0;
}
```

