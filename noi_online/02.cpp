#include <iostream>

using namespace std;

const int N = 100010;

int n, p;
int f[N], g[N];

int main() {
    cin >> n >> p;
    int m = 0;
    for (int k = 1; g[m] <= n; k++) {
        g[++m] = (3 * k * k - k) / 2;
        g[++m] = (3 * k * k + k) / 2;
    }
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1, t = 1; g[j] <= i; j++) {
            f[i] = (f[i] + f[i - g[j]] * t) % p;
            if (j % 2 == 0) t *= -1;
        }
    cout << (f[n] + p) % p << endl;
    return 0;
}