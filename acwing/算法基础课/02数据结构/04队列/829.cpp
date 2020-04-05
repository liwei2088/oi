#include <iostream>
using namespace std;
const int N = 100005;
int q[N], f, r;
void push(int x) { q[r++] = x; }
void pop() { f++; }
string empty() { return f == r ? "YES" : "NO"; }
int query() { return q[f]; }
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
            cout << query() << endl;
        } else {
            cout << empty() << endl;
        }
    }

    return 0;
}