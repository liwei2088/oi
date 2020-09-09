#include <iostream>
using namespace std;
int n, a[105], l[105], r[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        l[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[i] > a[j]) l[i] = max(l[i], l[j] + 1);
    }
    for (int i = n; i >= 1; i--) {
        r[i] = 1;
        for (int j = n; j > i; j--)
            if (a[i] > a[j]) r[i] = max(r[i], r[j] + 1);
    }
    int mx = 0;
    for (int i = 1; i <= n; i++) mx = max(mx, l[i] + r[i]);
    cout << n - mx - 1;
    return 0;
}