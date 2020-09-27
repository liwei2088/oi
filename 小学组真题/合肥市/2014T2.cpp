#include <algorithm>
#include <iostream>
using namespace std;
int n, a[30005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    if (n % 2 == 1)
        cout << a[(n + 1) / 2];
    else
        cout << (a[n / 2] + a[n / 2 + 1]) / 2;
    return 0;
}