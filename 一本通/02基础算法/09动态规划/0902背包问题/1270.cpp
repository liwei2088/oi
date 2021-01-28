#include <cstdio>
#include <iostream>
using namespace std;
const int N = 2005, M = 205;
int n, m, v[N], w[N], t[N], f[M];
int main() {
    cin >> m >> n;
    int num = 0;
    for (int i = 1; i <= n; i++) {
        int a, b, s;
        cin >> a >> b >> s;
        if (s == 0) {
            num++;
            v[num] = a;
            w[num] = b;
            t[num] = s;
        } else {
            for (int j = 1; j <= s; j <<= 1) {
                num++;
                v[num] = j * a;
                w[num] = j * b;
                t[num] = 1;
                s -= j;
            }
            if (s) {
                num++;
                v[num] = s * a;
                w[num] = s * b;
                t[num] = 1;
            }
        }
    }
    n = num;
    for (int i = 1; i <= n; i++)
        if (t[i] == 0) {
            for (int j = v[i]; j <= m; j++)
                f[j] = max(f[j], f[j - v[i]] + w[i]);
        } else {
            for (int j = m; j >= v[i]; j--)
                f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    cout << f[m];
    return 0;
}