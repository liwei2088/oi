#include <iostream>
using namespace std;
int n, a[100];
int main() {
    cin >> n;
    int mx = 0, idx1 = 0, mi = 1e9, idx2 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
            idx1 = i;
        }
        if (a[i] < mi) {
            mi = a[i];
            idx2 = i;
        }
    }
    cout << abs(idx1 - idx2) - 1;
    return 0;
}