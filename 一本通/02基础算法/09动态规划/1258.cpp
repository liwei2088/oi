#include <iostream>
using namespace std;
const int N = 200;
int n, a[N], p[N], f[N];

void print(int k) {
    if (k == 0) return;
    print(p[k]);
    cout << a[k] << " ";
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] >= a[j] && f[i] <= f[j]) {  //注意可以包含等于
                f[i] = f[j] + 1;
                p[i] = j;
            }
    }
    int ans = 0, k = 0;
    for (int i = 1; i <= n; i++)
        if (ans < f[i]) ans = f[i], k = i;
    cout << "max=" << ans << endl;
    print(k);
    return 0;
}