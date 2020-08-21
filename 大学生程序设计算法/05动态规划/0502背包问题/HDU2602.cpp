/**
 * HDU2602 0/1背包模板题
 */ 
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int f[1005], w[1005], v[1005];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, V;
        memset(f, 0, sizeof(f));
        memset(v, 0, sizeof(v));
        memset(w, 0, sizeof(w));
        scanf("%d%d", &n, &V);
        for (int i = 1; i <= n; i++) scanf("%d", &v[i]);
        for (int i = 1; i <= n; i++) scanf("%d", &w[i]);
        for (int i = 1; i <= n; i++)
            for (int j = V; j >= w[i]; j--)
                f[j] = max(f[j], f[j - w[i]] + v[i]);
        printf("%d\n", f[V]);
    }
    return 0;
}