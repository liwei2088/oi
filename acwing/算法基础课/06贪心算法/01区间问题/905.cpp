#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int begin, end;
} a[100005];
int n;

//按照右端点从小到大排序
bool cmp(node x, node y) {
    if (x.end != y.end) return x.end < y.end;
    return x.begin < y.begin;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].begin >> a[i].end;
    sort(a + 1, a + n + 1, cmp);
    int ans = 1, t = a[1].end;  //第一个点设置在第一个区间的右端点
    for (int i = 2; i <= n; i++) {
        if (a[i].begin > t) {  //如果新的区间左端点>t
            ans++;             //新增一个点
            t = a[i].end;      //更新t为新区间的右端点
        }
    }
    cout << ans;
    return 0;
}