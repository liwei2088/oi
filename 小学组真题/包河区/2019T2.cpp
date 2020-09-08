#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
struct node {
    int value;
    int type;
} a[20010];

bool cmp(node x, node y) {
    if (x.value > y.value) return true;
    if (x.value == y.value && x.type < y.type) return true;
    return false;
}

int main() {
    cin >> n >> m;
    n--, m--;
    for (int i = 1; i <= n; i++) cin >> a[i].value, a[i].type = 1;
    for (int i = n + 1; i <= n + m; i++) cin >> a[i].value, a[i].type = 2;
    sort(a + 1, a + n + m + 1, cmp);
    int col = 1, row = 1, ans = 0;
    for (int i = 1; i <= n + m; i++) {
        if (a[i].type == 1) {
            ans += col * a[i].value;
            row++;
        } else {
            ans += row * a[i].value;
            col++;
        }
    }
    cout << ans;
    return 0;
}