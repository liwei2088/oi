#include <iostream>
using namespace std;
int n, m, a[1000005];
int q[1000005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int f = 1, r = 0;
    for (int i = 1; i <= n; i++) {
        if (f <= r && q[f] <= i - m) f++;
        while (f <= r && a[i] <= a[q[r]]) r--;
        q[++r] = i;
        if (i >= m) cout << a[q[f]] << " ";
    }
    cout << endl;
    f = 1, r = 0;
    for (int i = 1; i <= n; i++) {
        if (f <= r && q[f] <= i - m) f++;
        while (f <= r && a[i] >= a[q[r]]) r--;
        q[++r] = i;
        if (i >= m) cout << a[q[f]] << " ";
    }
    return 0;
}