#include <iostream>
using namespace std;
const int N = 100005;
int stk[N], tt;

void push(int x) { stk[++tt] = x; }
void pop() { tt--; }
int get_top() { return stk[tt]; }
string empty() { return tt == 0 ? "YES" : "NO"; }

int main() {
    int m;
    cin >> m;
    while (m--) {
        string op;
        int x;
        cin >> op;
        if (op == "push") {
            cin >> x;
            push(x);
        } else if (op == "pop") {
            pop();
        } else if (op == "query") {
            cout << get_top() << endl;
        } else if (op == "empty") {
            cout << empty() << endl;
        }
    }
    return 0;
}