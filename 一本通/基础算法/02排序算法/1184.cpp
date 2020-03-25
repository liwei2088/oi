#include <algorithm>
#include <iostream>
using namespace std;
const int N = 105;
int n, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int m = unique(a + 1, a + n + 1) - (a + 1);
    cout << m << endl;
    for (int i = 1; i <= m; i++) cout << a[i] << " ";
    return 0;
}