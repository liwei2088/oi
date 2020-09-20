#include <algorithm>
#include <iostream>
using namespace std;
int n, k, a[10005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    unique(a + 1, a + n + 1);
    cout << a[k];
    return 0;
}