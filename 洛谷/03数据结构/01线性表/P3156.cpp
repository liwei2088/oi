#include <iostream>
using namespace std;
const int N = 2e6;
int n, m, a[N];
int main() {
    int x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (m--) {
        cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}