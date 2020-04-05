#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int xh, cj;
} a[5005];
int n, m;

bool cmp(node x, node y) {
    if (x.cj == y.cj) return x.xh < y.xh;
    return x.cj > y.cj;
}

int main() {
    cin >> n >> m;
    m = m * 1.5;
    for (int i = 1; i <= n; i++) cin >> a[i].xh >> a[i].cj;
    sort(a + 1, a + n + 1, cmp);
    int f = a[m].cj;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (a[i].cj >= f) cnt++;
    cout << f << " " << cnt << endl;
    for (int i = 1; i <= cnt; i++) cout << a[i].xh << " " << a[i].cj << endl;
    return 0;
}