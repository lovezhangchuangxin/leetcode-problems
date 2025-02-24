# 长度为 K 子数组中的最大和

## bitset

参考：https://www.runoob.com/cplusplus/cpp-libs-bitset.html

bitset 是标准库的一部分，提供了一种方式来操作固定大小的位集合。

位集合是一个由位（bit）组成的数组，每个位可以是0 或 1。

语法：
```cpp
#include <bitset>

// 声明一个大小为N的bitset
std::bitset<N> b;

// 初始化bitset
b = std::bitset<N>(value);

// 访问位集合中的单个位
bool bit = b[i];
```

### 初始化

std::bitset 是一个模板类，用于表示固定大小的二进制位序列。它的模板参数是位数（N），表示二进制序列的长度。

```cpp
std::bitset<4> b; // 4位二进制序列
```

- 默认初始化：所有位为 0。
- 从整数初始化：将整数转换为二进制。
- 从字符串初始化：将字符串解析为二进制。

```cpp
std::bitset<4> b1; // 0000
std::bitset<4> b2(12); // 1010
std::bitset<4> b3("1010"); // 1010
```

### 常见成员函数

- `operator[]`：访问或修改某一位。
- `set()`：将某一位或所有位设置为 1。
- `reset()`：将某一位或所有位设置为 0。
- `flip()`：翻转某一位或所有位。
- `count()`：返回 1 的个数。
- `size()`：返回位数。
- `test(pos)`：检查某一位是否为 1。
- `all()`：检查是否所有位都为 1。
- `any()`：检查是否有任何一位为 1。
- `none()`：检查是否所有位都为 0。
- `to_ulong()`：将 `std::bitset` 转换为 unsigned long。
- `to_ullong()`：将 `std::bitset` 转换为 unsigned long long。
- `to_string()`：将 `std::bitset` 转换为字符串。

### 位操作

`std::bitset` 支持常见的位操作，如按位与、按位或、按位异或和按位取反。

- &：按位与
- |：按位或
- ^：按位异或
- ~：按位取反

```cpp
std::bitset<8> bits1("10101010");
std::bitset<8> bits2("11110000");

std::bitset<8> result_and = bits1 & bits2;  // 按位与：10100000
std::bitset<8> result_or = bits1 | bits2;   // 按位或：11111010
std::bitset<8> result_xor = bits1 ^ bits2;  // 按位异或：01011010
std::bitset<8> result_not = ~bits1;         // 按位取反：01010101
```

注意：

- `std::bitset` 的大小是固定的，在编译时确定。

- 如果位数超过 `unsigned long` 或 `unsigned long long` 的位数，`to_ulong()` 和 `to_ullong()` 会抛出 `std::overflow_error` 异常。

- `std::bitset` 不支持动态调整大小，如果需要动态位集，可以考虑 `std::vector<bool>`。