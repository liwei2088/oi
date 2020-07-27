#include <iostream>
using namespace std;
/*
4
10 3 1 2
10 2 1 2
10 9 7 3
10 10 10000 0

*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, v, k;
        cin >> n >> m >> v >> k;
        int a = m;
        if (a >= n) {
            cout << "0" << endl;
            continue;
        }
        if (a < v) {
            cout << "-1" << endl;
            continue;
        }
        int ans = 0;
        while (a < n) {
            if (a >= (a - v) * k) {
                ans = -1;
                break;
            }
            a = (a - v) * k;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}