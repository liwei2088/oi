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
    if (x == '+' || x == '-') return 2;
    if (x == '*' || x == '/') return 3;
    if (x == '^') return 4;
    return 1;
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

bool check() {
    stack<char> stk;
    if (str.size() == 2 && lev(str[0]) > 1) return false;
    for (int i = 0; str[i] != '@'; i++) {
        if (str[i] == '(')
            stk.push('(');
        else if (str[i] == ')') {
            if (stk.empty()) return false;
            stk.pop();
        }
    }
    for (int i = 1; str[i] != '@'; i++)
        if (lev(str[i]) > 1 && lev(str[i - 1]) > 1) return false;
    return true;
}

int main() {
    int sum = 0;
    bool isnum = false;
    cin >> str;
    if (check() == false) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; str[i] != '@'; i++) {
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