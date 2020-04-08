/*
    155. 最小栈
    设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
    push(x) —— 将元素 x 推入栈中。
    pop() —— 删除栈顶的元素。
    top() —— 获取栈顶元素。
    getMin() —— 检索栈中的最小元素。
*/

#include <iostream>
#include <stack>
using namespace std;
//需要单独建立一个保存最小值的单调栈
stack<int> stkval;
stack<int> stkmin;

//入栈操作中对单调栈的操作要注意，只要入栈数据小于单调栈顶数据时才能入栈
void push(int x) {
    stkval.push(x);
    //注意可能会有重复数据，注意这里不能使用> 而要用>=
    if (stkmin.empty() || stkmin.top() >= x) stkmin.push(x);
}

//出栈时要注意 栈顶元素如果和单调栈顶元素一致，则单调栈顶元素也要出栈
void pop() {
    if (stkmin.top() == stkval.top()) stkmin.pop();
    stkval.pop();
}

int top() { return stkval.top(); }

int getMin() { return stkmin.top(); }

int main() { return 0; }