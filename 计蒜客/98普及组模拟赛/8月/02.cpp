#include <algorithm>
#include <iostream>
using namespace std;
int n, f[100005];
struct node {
    int begin, end;
} l[100005], r[100005];
bool cmp(node x, node y) {
    if (x.begin < y.begin) return true;
    if (x.begin == y.begin && x.end < y.end) return true;
    return false;
}

int bsearch(int lt, int rt, int k) {
    while (lt < rt) {
        int m = (lt + rt + 1) >> 1;
        cout << m << endl;
        if (r[m].begin <= k)
            lt = m;
        else
            rt = m - 1;
    }
    return lt;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> f[i];
    int u = 0, v = 0;
    for (int i = 1; i <= n; i++) {
        if (f[i] == 1) {
            u++;
            cin >> l[u].begin >> l[u].end;
        } else {
            v++;
            cin >> r[v].begin >> r[v].end;
        }
    }
    sort(l + 1, l + u + 1, cmp);
    sort(r + 1, r + v + 1, cmp);
    int j = 1, ans = 0;
    for (int i = 1; i <= u; i++) {
        while (j < v && r[j].end < l[i].begin) j++;
        int k = bsearch(j, v, l[i].end);
        cout << k << endl;
        ans += k - j + 1;
    }
    cout << ans;
    return 0;
}