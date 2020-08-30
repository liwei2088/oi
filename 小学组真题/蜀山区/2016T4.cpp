#include <iostream>
using namespace std;
int n, m, a[100005];

bool check(int x) {
    int res = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        if (sum + a[i] > x) {
            sum = 0;
            res++;
        }
        sum += a[i];
    }
    res++;
    return res <= m;
}

int bsearch(int l, int r) {
    while (l < r) {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int main() {
    cin >> n >> m;
    int l = 10000, r = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        l = min(l, a[i]);
        r += a[i];
    }
    cout << bsearch(l, r);
    return 0;
}