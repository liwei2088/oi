#include <algorithm>
#include <iostream>
using namespace std;
int n, num[200005];
struct node {
    int x, h;
} a[100005];

bool cmp(node a, node b) {
    if (a.x < b.x) return true;
    if (a.x == b.x && a.h < b.h) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x >> a[i].h;
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (num[a[i].h] > 0)
            num[a[i].h]--;
        else
            ans++;
        num[a[i].h - 1]++;
    }
    cout << ans;
    return 0;
}