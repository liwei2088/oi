#include <iostream>
using namespace std;
int n, k, h[100005], w[100005];

bool check(int x) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) cnt += (w[i] / x) * (h[i] / x);
    return cnt >= k;
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i] >> w[i];
    int l = 1, r = 1e5;
    while (l < r) {
        int m = (l + r + 1) >> 1;
        if (check(m)) l = m;
        else r = m - 1;
    }
    cout << l;
    return 0;
}