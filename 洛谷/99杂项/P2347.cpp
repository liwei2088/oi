#include <cstdio>
#include <iostream>
using namespace std;
int a[] = {0, 1, 2, 3, 5, 10, 20};
int v[1005], f[1005];
int main() {
    int n = 0;
    for (int i = 1; i <= 6; i++) {
        int s;
        cin >> s;
        for (int j = 1; j <= s; j <<= 1) {
            n++;
            v[n] = j * a[i];
            s -= j;
        }
        if (s) {
            n++;
            v[n] = s * a[i];
        }
    }
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1000; j >= v[i]; j--) f[j] += f[j - v[i]];
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
        if (f[i]) ans++;
    cout << "Total=" << ans;
    return 0;
}