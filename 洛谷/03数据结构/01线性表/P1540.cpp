#include <iostream>
using namespace std;
const int N = 1005;
int m, n, q[N], f = 1, r = 1;  
bool find(int k) {
    for (int i = f; i < r; i++)
        if (q[i] == k) return true;
    return false;
}
//提交时发现一个问题，就是r注意指向的是要添加的位置所以该位置并没有数据
//边界控制的时候要注意不能等于 r
int main() {
    int x, ans = 0;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (find(x)) continue;
        if (r - f < m)
            q[r++] = x;
        else
            f++, q[r++] = x;
        ans++;
    }
    cout << ans;
    return 0;
}