#include <iostream>
using namespace std;
int n, a[205], f[205], p[205];

void print(int x) {
    if (p[x] != 0) print(p[x]);
    cout << a[x] << " ";
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, idx = 0;
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] >= a[j] && f[i] < f[j] + 1) {
                f[i] = f[j] + 1;
                p[i] = j;
            }
        if (ans < f[i]) {
            ans = f[i];
            idx = i;
        }
    }
    cout << "max=" << ans << endl;
    print(idx);
    return 0;
}