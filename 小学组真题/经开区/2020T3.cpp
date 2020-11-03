#include <iostream>
using namespace std;
int n, a[100005], b[100005], t[100005], res[100005];

void mergesort(int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r) {
        if (a[i] <= a[j])
            t[k++] = a[i++];
        else
            res[a[j]] += m - i + 1, t[k++] = a[j++];
    }
    while (i <= m) t[k++] = a[i++];
    while (j <= r) t[k++] = a[j++];
    for (int i = l; i <= r; i++) a[i] = t[i];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i], b[i] = a[i];
    mergesort(1, n);
    for (int i = 1; i <= n; i++) cout << res[b[i]] << " ";
    return 0;
}