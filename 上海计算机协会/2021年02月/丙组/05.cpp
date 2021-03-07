#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000006;
int s[N];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        s[x]++;
        s[y + 1]--;
    }
    int ans = 0;
    for (int i = 1; i <= 1000000; i++) {
        s[i] += s[i - 1];
        ans = max(ans, s[i]);
    }
    printf("%d", ans);
    return 0;
}