/**
 * 将每个城堡的积木通过0/1背包得到所有的可能高度，记录高度出现次数
 * 如果次数正好等于城堡个数，说明所有城堡都能实现这个高度
 * 注意：由于高度都不一样，所以一定不会在同一个城堡出现重复高度的
 */
#include <cstring>
#include <iostream>
using namespace std;
int n, w[105], f[10005], h[10005];
int main() {
    int mx = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        memset(f, 0, sizeof(f));
        memset(w, 0, sizeof(w));
        int x, m = 0, s = 0;
        while (cin >> x && x != -1) {
            w[++m] = x;
            s += x;
        }
        mx = max(mx, s);
        for (int j = 1; j <= m; j++) {
            f[0] = 1;  //此处初值是关键，因为高度0所有的城堡都能实现
            for (int k = s; k >= w[j]; k--)
                if (f[k - w[j]] == 1 && f[k] == 0) {
                    f[k] = 1;
                    h[k]++;
                }
        }
    }
    for (int i = mx; i >= 0; i--) {
        if (h[i] == n) {
            cout << i;
            break;
        }
    }
    return 0;
}