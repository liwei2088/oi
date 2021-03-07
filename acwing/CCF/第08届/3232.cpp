#include <cstdio>
#include <iostream>
using namespace std;
int n;
int main() {
    scanf("%d", &n);
    int x = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        int y;
        scanf("%d", &y);
        ans = max(ans, abs(x - y));
        x = y;
    }
    printf("%d", ans);
    return 0;
}