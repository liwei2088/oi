#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1010;
int n, a[N], m;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) a[i] = i;
    cin >> m;
    while (m--) {
        int p, q;
        cin >> p >> q;
        int idx = 0;
        for (int i = 1; i <= n; i++)
            if (a[i] == p) {
                idx = i;
                break;
            }
        int t = a[idx];
        if (q > 0) {
            for (int i = 1; i <= q; i++) {
                a[idx + i - 1] = a[idx + i];
            }
            a[idx + q] = t;
        } else if (q < 0) {
            for (int i = -1; i >= q; i--) {
                a[idx + i + 1] = a[idx + i];
            }
            a[idx + q] = t;
        }
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}