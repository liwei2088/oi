#include <algorithm>
#include <iostream>
using namespace std;
int n, a[505], m;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1) a[++m] = x;
    }
    sort(a + 1, a + m + 1);
    for (int i = 1; i <= m; i++)
        if (i == 1)
            cout << a[i];
        else
            cout << "," << a[i];
    return 0;
}