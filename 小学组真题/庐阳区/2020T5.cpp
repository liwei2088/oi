#include <iostream>
using namespace std;
int n, m, a[100000];

bool check(int x) {
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] > x) sum += a[i] - x;
    return m <= sum;
}

int bsearch(int l, int r) {
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (check(m))
            l = m;
        else
            r = m - 1;
    }
    return l;
}

int main() {
    cin >> n >> m;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    cout << bsearch(0, mx);
    return 0;
}