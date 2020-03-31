#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N];
bool st[N];
int main() {
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    //双指针模板
    for (int i = 1, j = 1; i <= n; i++) {
        while (j < i && st[a[i]]) st[a[j]] = false, j++;
        st[a[i]] = true;
        ans = max(ans, i - j + 1);
    }
    cout << ans;
    return 0;
}