#include <iostream>
using namespace std;
int n, m, a[2005];
const long long mod = 998244355;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = m - a[i];
    }
    long long ans = 1;
    for (int i = 0, j = 0; i <= n; i++) {
        if (abs(a[i] - a[i + 1]) > 1) {
            cout << "0" << endl;
            return 0;
        }
        if (a[i] - a[i + 1] == 1)
            ans = (ans * j) % 998244355, j--;
        else if (a[i] - a[i + 1] == 0)
            ans = (ans * (j + 1)) % 998244355;
        else if (a[i] - a[i + 1] == -1)
            j++;
    }
    cout << ans;
    return 0;
}