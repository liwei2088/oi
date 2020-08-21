/**
 * HDU 1069 
 * 算法：线性动态规划（LIS） + 贪心算法
 * 每个方块按照6个不同摆放方式放入到数组中
 * 排序按长度大小 长度相同的按照宽度排序
 * 最后线性动态规划求最长序列
 */

#include <algorithm>
#include <iostream>
using namespace std;

// n最大值是 30 每个长方体有6个摆放方法
struct node {
    int l, w, h;
} a[185];

int f[185];

bool cmp(node x, node y) {
    if (x.l < y.l) return true;
    if (x.l == y.l && x.w < y.w) return true;
    return false;
}

int main() {
    int n, k = 1;
    while (cin >> n && n != 0) {
        int m = 0;
        for (int i = 1; i <= n; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            m++;
            a[m].l = x, a[m].w = y, a[m].h = z;
            m++;
            a[m].l = x, a[m].w = z, a[m].h = y;
            m++;
            a[m].l = y, a[m].w = x, a[m].h = z;
            m++;
            a[m].l = y, a[m].w = z, a[m].h = x;
            m++;
            a[m].l = z, a[m].w = x, a[m].h = y;
            m++;
            a[m].l = z, a[m].w = y, a[m].h = x;
        }
        sort(a + 1, a + m + 1, cmp);
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            f[i] = a[i].h;
            for (int j = 1; j < i; j++)
                if (a[i].l > a[j].l && a[i].w > a[j].w)
                    f[i] = max(f[i], f[j] + a[i].h);
            ans = max(ans, f[i]);
        }
        cout << "Case " << k++ << ": maximum height = " << ans << endl;
    }
    return 0;
}