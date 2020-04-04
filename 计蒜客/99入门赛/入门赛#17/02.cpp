#include <cstdio>
#include <iostream>
using namespace std;
char s[10005];
int main() {
    scanf("%s", s);
    int ans = 0, cnt = 0;
    char cur;
    for (int i = 0; s[i]; i++) {
        if (i == 0) {
            cur = s[i];
            cnt = 1;
            continue;
        }
        if (cur == s[i]) {
            cnt++;
            continue;
        }
        ans = max(ans, cnt);
        cur = s[i];
        cnt = 1;
    }
    ans = max(ans, cnt);
    printf("%d", ans);
    return 0;
}