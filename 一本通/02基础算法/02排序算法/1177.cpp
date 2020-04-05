#include <algorithm>
#include <iostream>
using namespace std;
const int N = 505;
int n, a[N], m;
int main() {
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 1) a[++m] = x;
    }
    sort(a + 1, a + m + 1);
    cout << a[1];
    for (int i = 2; i <= m; i++) cout << "," << a[i];
    return 0;
}