#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    sort(a + 1, a + n + 1);
    int idx = 0;
    for (int i = 1; i <= n; i++)
        if (binary_search(a + 1, a + n + 1, m - a[i])) {
            cout << a[i] << " " << m - a[i];
            return 0;
        }
    cout << "No";
    return 0;
}