#include <iostream>
using namespace std;
struct node {
    char ch;
    int idx;
} q[105];
int tp;
string s;
bool f[105];
int main() {
    cin >> s;
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '[')
            tp++, q[tp].ch = s[i], q[tp].idx = i;
        else if (s[i] == ')' && q[tp].ch == '(')
            f[q[tp].idx] = true, tp--, f[i] = true;
        else if (s[i] == ']' && q[tp].ch == '[')
            f[q[tp].idx] = true, tp--, f[i] = true;
    }
    for (int i = 0; s[i]; i++) {
        if (f[i] == false && (s[i] == '(' || s[i] == ')'))
            cout << "()";
        else if (f[i] == false && (s[i] == '[' || s[i] == ']'))
            cout << "[]";
        else
            cout << s[i];
    }
    return 0;
}