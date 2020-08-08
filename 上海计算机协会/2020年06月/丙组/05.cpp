#include <iostream>
using namespace std;
int n, m, k, num, ans = 1e9;
int a[805][805];  //针对行的前缀和

//利用前缀和求列号在[l,r]区间内的最小面积
void work(int l, int r) {
    int sum = 0, u = 1, v = 1;
    for (; u <= n; u++) {
        //求前缀和  ，sum<=k 优化
        for (; v <= n && sum < k; v++) sum += a[v][r] - a[v][l - 1];
        if (sum < k) break;  //无效方案
        ans = min(ans, (r - l + 1) * (v - u));
        sum -= a[u][r] - a[u][l - 1];
    }
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            char c;
            cin >> c;
            num += (c == '.');
            //求j行的前缀和
            a[i][j] = a[i][j - 1] + (c == '.');
        }
    if (num < k) {
        cout << "No Solution";
        return 0;
    }
    //枚举列区间[l,r]
    for (int l = 1; l <= m; l++)
        for (int r = l; r <= m; r++) work(l, r);
    cout << ans;
    return 0;
}