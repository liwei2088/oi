#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N];

void quickSort(int q[], int l, int r) {
    if (l >= r) return;
    int i = l - 1, j = r + 1, m = q[(l + r) >> 1];
    while (i < j) {
        while (a[++i] < m);
        while (a[--j] > m);
        if (i < j) swap(a[i], a[j]);
    }
    quickSort(q, l, j);
    quickSort(q, j + 1, r);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    quickSort(a, 1, n);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}