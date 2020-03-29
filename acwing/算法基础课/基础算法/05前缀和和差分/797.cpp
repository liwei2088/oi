#include <iostream>
using namespace std;
int n, m, a[100005], b[100005];
int main() {
    int l, r, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }
    while (m--) {
        cin >> l >> r >> c;
        b[l] += c;
        b[r + 1] -= c;
    }
    for (int i = 1; i <= n; i++) {
        b[i] = b[i] + b[i - 1];
        cout << b[i] << " ";
    }
    return 0;
}