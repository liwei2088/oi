#include <algorithm>
#include <iostream>
using namespace std;
int n, a[1005], b[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    int ans = 0, ta = n, tb = n, da = 1, db = 1;
    while (n--) {
        if (a[ta] > b[tb]) {
            ta--, tb--;
            ans += 50;
        } else if (a[ta] < b[tb]) {
            da++, tb--;
            ans -= 50;
        } else if (a[da] > b[db]) {
            da++, db++;
            ans += 50;
        } else if (a[da] < b[tb]) {
            da++, tb--;
            ans -= 50;
        }
    }
    cout << ans;
    return 0;
}