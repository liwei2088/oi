#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int n, a[1005];

bool check(int x) {
    for (int i = sqrt(x); i >= 1; i--)
        if (i * i == x) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = n; i >= 1; i--) {
        if (!check(a[i])) {
            cout << a[i] << endl;
            return 0;
        }
    }
    return 0;
}