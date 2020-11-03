#include <cstdio>
#include <iostream>
using namespace std;
int n, x, a[100005];
int main() {
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    cin >> n >> x;
    for (int i = 1; i <= 100000; i++) {
        if (i % x == 0)
            a[i] = a[i - 1] + 1;
        else
            a[i] = a[i - 1];
    }
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l] << endl;
    }
    return 0;
}