#include <iostream>
using namespace std;
int n, a[10005], k;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> k;
    for (int i = 1; i <= n; i++)
        if (a[i] == k) {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}