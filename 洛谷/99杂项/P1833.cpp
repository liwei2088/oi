#include <cstdio>
#include <iostream>
using namespace std;
int n, m, v[100005], w[100005], t[100005], f[1005];
int main() {
    int h1, m1, h2, m2;
    scanf("%d:%d%d:%d%d", &h1, &m1, &h2, &m2, &n);
    m = (h2 - h1) * 60 + m2 - m1;
    int num = 0;
    for (int i = 1; i <= n; i++) {
        int a, b, s;
        cin >> a >> b >> s;
        if (s == 0) {
            num++;
            v[num] = a;
            w[num] = b;
            t[num] = 0;
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