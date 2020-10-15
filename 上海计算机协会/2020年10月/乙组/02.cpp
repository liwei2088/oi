#include <bits/stdc++.h>
using namespace std;
int n, k, a[10010];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        a[i + n] = a[i];
    }
    int k = qsort(); 
    return 0;
}