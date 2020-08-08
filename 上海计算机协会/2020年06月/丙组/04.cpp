#include <iostream>
using namespace std;
int n, m, p[100005], c[100005];
int main() {
    int ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> p[i] >> c[i];
    int low = 1;
    for (int i = 1; i <= n; i++) {
        low = max(i - m, low);
        for (int j = low; j <= i; j++) {
            if (p[j] == 0) continue;
            if (c[i] >= p[j]) {
                c[i] -= p[j];
                ans += p[j];
                p[j] = 0;
                low++;
            } else {
                p[j] -= c[i];
                ans += c[i];
                break;
            }
        }
    }
    cout << ans;
    return 0;
}