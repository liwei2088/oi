#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N], t[N];

void mergeSort(int q[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) >> 1;
    mergeSort(q, l, m);
    mergeSort(q, m + 1, r);
    int i = l, j = m + 1, k = l;
    while (i <= m || j <= r) {
        if (j > r || (i <= m && a[i] <= a[j]))
            t[k++] = a[i++];
        else
            t[k++] = a[j++];
    }
    for (int i = l; i <= r; i++) a[i] = t[i];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    mergeSort(a, 1, n);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}