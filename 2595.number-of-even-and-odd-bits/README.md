# 奇偶位数

## __builtin_popcount

`__builtin_popcount` 是 C++ 内建函数，用于计算一个数的二进制表示中 1 的个数。

```cpp
int i = 0b10101010;

int count = __builtin_popcount(i); // count = 4
```

模拟实现：

```cpp
int popcount(int x) {
    int count = 0;
    while (x) {
        x &= x - 1;
        count++;
    }
    return count;
}
```

注意 `x &= x - 1` 操作会将 `x` 的最低位 1 变为 0。

## 异或操作

注意如果想让一个数字只在 0 和 1 之间变化，可以使用 `^=1` 操作。

```cpp
int i = 0;

i ^= 1; // i = 1
i ^= 1; // i = 0
```
