#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char m[1010], x[1010];
int main() {
    int n, ans = 0;
    scanf("%d", &n);
    scanf("%s", m);
    while (n--) {
        scanf("%s", x);
        int lm = strlen(m), lx = strlen(x);
        if (lm < lx || (lm == lx && strcmp(m, x) <= 0)) ans++;
    }
    printf("%d", ans);
    return 0;
}