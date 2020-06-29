#include <iostream>
using namespace std;
const int N = 10005;
int a[N], n, m;

/*
    1. 数据量比较小 直接模拟
    2. 差分 给某个区间做+1操作
*/

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        a[x] += 1, a[y + 1] -= 1;  //[x,y]区间+1
    }
    int ans = 0;
    if (a[0] == 0) ans = 1;
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        if (a[i] == 0) ans++;
    }
    cout << ans;
    return 0;
}