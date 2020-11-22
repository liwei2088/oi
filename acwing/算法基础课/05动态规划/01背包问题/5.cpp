#include <iostream>
using namespace std;
int n, m, v[25000], w[25000], f[25000];
int main() {
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int k = 1; k <= c; k <<= 1) {
            cnt++;
            v[cnt] = k * a;
            w[cnt] = k * b;
            c -= k;
        }
        if (c > 0) {
            cnt++;
            v[cnt] = a * c;
            w[cnt] = b * c;
        }
    }
    n = cnt;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}