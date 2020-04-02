#include <iostream>
using namespace std;
const int N = 100005;
int n, k, a[N];

int quickSort(int q[], int l, int r, int k) {
    if (l >= r) return a[l];
    int i = l - 1, j = r + 1, m = q[(l + r) >> 1];
    while (i < j) {
        while (q[++i] < m);
        while (q[--j] > m);
        if (i < j) swap(q[i], q[j]);
    }
    int s = j - l + 1;
    if (k <= s) return quickSort(q, l, j, k);
    return quickSort(q, j + 1, r, k - s);
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << quickSort(a, 1, n, k);
    return 0;
}