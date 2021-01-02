#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, a[2000005];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        a[x + 1000000]++;
    }
    int ans = 0;
    for (int i = 0; i <= 2000000; i++)
        if (a[i] > a[ans]) ans = i;
    printf("%d", ans - 1000000);
    return 0;
}