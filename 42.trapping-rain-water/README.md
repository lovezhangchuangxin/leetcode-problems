# 接雨水

## C++ 中的 stack.pop 返回 void

C++ 中，stack 的 pop 方法被刻意设计为不返回栈顶元素。这是由于如果要返回栈顶元素，就不得不通过值而不是引用返回：通过引用返回会产生一个悬空引用。按值返回的效率很低，因为这可能会涉及构造函数的调用。