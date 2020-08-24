#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
        if (a[i] > 0) {
            cout << i << " ";
            ans++;
        }
    cout << endl;
    cout << ans;
    return 0;
}