#include <iostream>
using namespace std;
int n, m, ne[105];
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) ne[i] = i + 1;
    ne[n] = 1;
    int t = 0, k = 0, idx = n;
    while (t != n) {
        while (k != m - 1) {
            idx = ne[idx], k++;
        }
        cout << ne[idx] << " ";
        ne[idx] = ne[ne[idx]];
        k = 0;
        t++;
    }
    return 0;
}