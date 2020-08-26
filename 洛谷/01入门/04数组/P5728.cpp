#include <cmath>
#include <iostream>
using namespace std;
int n;
struct node {
    int yw, sx, yy, zf;
} a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].yw >> a[i].sx >> a[i].yy;
        a[i].zf = a[i].yw + a[i].sx + a[i].yy;
    }
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (abs(a[i].yw - a[j].yw) <= 5 && abs(a[i].sx - a[j].sx) <= 5 &&
                abs(a[i].yy - a[j].yy) <= 5 && abs(a[i].zf - a[j].zf) <= 10)
                ans++;
    cout << ans;
    return 0;
}