#include <iostream>
using namespace std;
int n, t, a[100005], b[100005], ans;

//等于双指针， a向前移动，b向后移动

int main() {
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    int u = 0, v = 0;
    while (v <= n && b[v] <= t) v++;
    v--;
    while (u <= n && a[u] <= t) {
        while (v > 0 && a[u] + b[v] > t) v--;
        ans = max(ans, u + v);
        ++u;
    }
    cout << ans;
    return 0;
}