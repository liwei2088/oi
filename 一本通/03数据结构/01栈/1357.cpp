#include <cstring>
#include <iostream>
using namespace std;
const int N = 1005;
int n, a[N], st[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    memset(st, 0, sizeof(st));  // 0表示在待进入栈的状态
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        int x = a[i];
        st[x] = 1;
        // 1表示数字x在栈中，则大于数字x一定不在栈中
        for (int j = x + 1; j <= n; j++)
            if (st[j] == 1) {
                flag = false;
                break;
            }
        if (!flag) break;
        st[x] = 2;
        // 2表示数字x出栈，则小于x的数字全部入栈
        for (int j = 1; j < x; j++)
            if (st[j] == 0) st[j] = 1;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}