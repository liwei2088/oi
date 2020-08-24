#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i + n] = a[i];
    }
    int ans = 1e9;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i + j] * j; 
        }
        ans = min(ans, sum);
    }
    cout << ans;
    return 0;
}