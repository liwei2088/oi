#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int n, a[1005], f[1005], tot;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i == 1) continue;
        f[++tot] = abs(a[i] - a[i - 1]);
    }
    sort(f + 1, f + tot + 1);
    for (int i = 1; i < n; i++)
        if (f[i] != i) {
            cout << "Not jolly";
            return 0;
        }
    cout << "Jolly";
    return 0;
}