#include <cstdio>
#include <iostream>
using namespace std;
char s[300], q[300];
int tt;
int main() {
    bool f = true;
    gets(s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(' || s[i] == '[')
            q[++tt] = s[i];
        else if (s[i] == ')') {
            if (tt && q[tt] == '(')
                tt--;
            else {
                f = false;
                break;
            }
        } else if (s[i] == ']') {
            if (tt && q[tt] == '[')
                tt--;
            else {
                f = false;
                break;
            }
        }
    }
    if (!tt && f)
        cout << "OK";
    else
        cout << "Wrong";
    return 0;
}