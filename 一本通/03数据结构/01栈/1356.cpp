#include <cmath>
#include <cstring>
#include <iostream>
#include <stack>
using namespace std;
string str;
stack<int> num;
stack<char> op;
//运算符优先级
int lev(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

void calc() {
    int a = num.top();
    num.pop();
    int b = num.top();
    num.pop();
    char p = op.top();
    op.pop();
    if (p == '+')
        num.push(a + b);
    else if (p == '-')
        num.push(b - a);
    else if (p == '*')
        num.push(a * b);
    else if (p == '/')
        num.push(b / a);
    else
        num.push(pow(b, a));
}

int main() {
    int sum = 0;
    bool isnum = false;
    cin >> str;
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum * 10 + str[i] - '0';
            isnum = true;
            continue;
        }
        if (isnum) {
            num.push(sum);
            sum = 0;
            isnum = false;
        }
        if (str[i] == '(') {
            op.push(str[i]);
            continue;
        }
        if (str[i] == ')') {
            while (op.top() != '(') calc();
            op.pop();
            continue;
        }
        if (op.empty()) {
            op.push(str[i]);
            continue;
        }
        while (!op.empty() && lev(op.top()) >= lev(str[i])) calc();
        op.push(str[i]);
    }
    if (isnum) num.push(sum);
    while (!op.empty()) calc();
    cout << num.top() << endl;
    return 0;
}