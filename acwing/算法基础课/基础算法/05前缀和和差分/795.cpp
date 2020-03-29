#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    int l, r;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = a[i] + a[i - 1];
    }
    while (m--) {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}