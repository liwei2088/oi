#include <cstdio>
#include <iostream>
using namespace std;
const int N = 2005, M = 6005;
int n, m, v[N], w[N], f[M];
int main() {
    cin >> n >> m;
    int num = 0;
    for (int i = 1; i <= n; i++) {
        int a, b, s;
        cin >> a >> b >> s;
        for (int j = 1; j <= s; j <<= 1) {
            num++;
            v[num] = j * a;
            w[num] = j * b;
            s -= j;
        }
        if (s) {
            num++;
            v[num] = s * a;
            w[num] = s * b;
        }
    }
    n = num;
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= v[i]; j--) f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m];
    return 0;
}