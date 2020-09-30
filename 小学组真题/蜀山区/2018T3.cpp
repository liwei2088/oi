#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n, k, a[30005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> k;
    sort(a + 1, a + n + 1, greater<int>());
    int idx = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == k) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}