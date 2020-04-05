#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100005;
char s[N], q[N];
int tt;
int main() {
    int ans = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '(')
            q[++tt] = s[i];
        else {
            if (tt && q[tt] == '(') {
                tt--;
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}