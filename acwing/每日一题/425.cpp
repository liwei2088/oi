#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, a[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    n = unique(a + 1, a + n + 1) - a - 1;
    cout << n << endl;
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}