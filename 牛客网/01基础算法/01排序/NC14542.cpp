#include <algorithm>
#include <iostream>
using namespace std;
int a[100005];
/*
    注意木桩可以任意移动
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        int ans = unique(a + 1, a + n + 1) - a - 1;
        cout << ans << endl;
    }
    return 0;
}