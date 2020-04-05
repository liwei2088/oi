#include <cstdio>
#include <iostream>
using namespace std;
char s[300], q[300];
int tt;
int main() {
    bool f = true;
    gets(s);
    for (int i = 0; s[i] != '@'; i++) {
        if (s[i] == '(')
            q[++tt] = '(';
        else if (s[i] == ')') {
            if (tt && q[tt] == '(')
                tt--;
            else {
                f = false;
                break;
            }
        }
    }
    if (!tt && f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}