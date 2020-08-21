#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
int n, k, cnt;
struct node {
    int v, c;
    bool f;
} a[200005];

bool cmp(node x, node y) {
    if (x.f == true && y.f == false) return true;
    if (x.f == true && y.f == true && x.c < y.c) return true;
    return false;
}

int main() {
    int x;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (a[x].f == false) cnt++;
        a[x].v = x;
        a[x].c++;
        a[x].f = true;
    }
    sort(a + 1, a + n + 1, cmp);
    int i = 0, ans = 0;
    while (cnt > k) {
        if (a[i].c != 0) {
            ans += a[i].c;
            cnt--;
        }
        i++;
    }
    cout << ans;
    return 0;
}