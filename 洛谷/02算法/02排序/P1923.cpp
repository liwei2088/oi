#include <iostream>
#include <cstdio>
using namespace std;
int a[5000005];

int qsort(int l, int r, int k) {
    if (l >= r) return a[l];
    int i = l - 1, j = r + 1, x = a[(l + r) >> 1];
    while (i < j) {
        while (a[++i] < x)
            ;
        while (a[--j] > x)
            ;
        if (i < j) swap(a[i], a[j]);
    }
    int s = j - l + 1;
    if (k <= s)
        return qsort(l, j, k);
    else
        return qsort(j + 1, r, k - s);
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    cout << qsort(1, n, k + 1);
    return 0;
}