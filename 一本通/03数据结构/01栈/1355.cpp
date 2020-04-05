#include <cstdio>
#include <iostream>
using namespace std;
char s[300];
int q[300], tt;
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        bool f = true;
        tt = 0;  //千万不要忘了清空栈
        scanf("%s", s);
        for (int i = 0; s[i]; i++) {
            if (s[i] == '<')
                q[++tt] = 1;
            else if (s[i] == '(') {
                if (tt && q[tt] < 2) f = false;
                q[++tt] = 2;
            } else if (s[i] == '[') {
                if (tt && q[tt] < 3) f = false;
                q[++tt] = 3;
            } else if (s[i] == '{') {
                if (tt && q[tt] < 4) f = false;
                q[++tt] = 4;
            } else if (s[i] == '>') {
                if (tt && q[tt] == 1)
                    tt--;
                else
                    f = false;
            } else if (s[i] == ')') {
                if (tt && q[tt] == 2)
                    tt--;
                else
                    f = false;
            } else if (s[i] == ']') {
                if (tt && q[tt] == 3)
                    tt--;
                else
                    f = false;
            } else {
                if (tt && q[tt] == 4)
                    tt--;
                else
                    f = false;
            }
            if (f == false) break;
        }
        if (!tt && f)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}