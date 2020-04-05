#include <cstdio>
#include <iostream>
using namespace std;
const int N = 105;
struct node {
    int no;
    double score;
} a[N];
int n, k;

int quickSort(node q[], int l, int r, int k) {
    if (l >= r) return l;
    int i = l - 1, j = r + 1;
    node m = q[(l + r) >> 1];
    while (i < j) {
        while (q[++i].score > m.score);
        while (q[--j].score < m.score);
        if (i < j) swap(q[i], q[j]);
    }
    int s = j - l + 1;
    if (k <= s) return quickSort(q, l, j, k);
    return quickSort(q, j + 1, r, k - s);
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i].no >> a[i].score;
    int t = quickSort(a, 1, n, k);
    printf("%d %g\n", a[t].no, a[t].score);
    return 0;
}