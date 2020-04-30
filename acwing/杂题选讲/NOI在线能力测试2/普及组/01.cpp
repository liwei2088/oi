#include <algorithm>
#include <iostream>
using namespace std;
const int N = 200005;
int n, L, v, q;
long long a[N], s[N];  //注意使用longlong类型
/*
    本题的基本思路： 首先需要对魔法数组a[i]做预处理，
    //1.需要排序 按照从大到小排序 因为较大的ai会让移动的距离更远 时间就会更多
    //2.其次为了方便计算多个魔法同时使用时增加的移动距离 所以需要先计算前缀和
    //3.最后二分查找前缀和数组是否有满足条件的
*/
int main() {
    cin >> n >> L >> v;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    s[0] = L;
    for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];
    int q;
    cin >> q;
    while (q--) {
        int t;
        cin >> t;
        int res = upper_bound(s, s + n + 1, 1ll * v * t) - s;
        if (res >= n + 1)
            cout << "-1" << endl;
        else
            cout << res << endl;
    }
    return 0;
}