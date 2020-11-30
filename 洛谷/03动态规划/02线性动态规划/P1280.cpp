#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    int begin, end;
} q[10005];
int n, k, f[10005], sum[10005];
bool cmp(node x, node y) { return x.begin > y.begin; }
int main() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> q[i].begin >> q[i].end;
        sum[q[i].begin]++;
    }
    sort(q + 1, q + k + 1, cmp);
    int idx = 1;
    for (int i = n; i >= 1; i--) {
        if (sum[i] == 0) {
            f[i] = f[i + 1] + 1;
            continue;
        }
        for (int j = 1; j <= sum[i]; j++) {
            f[i] = max(f[i], f[i + q[idx].end]);
            idx++;
        }
    }
    cout << f[1];
    return 0;
}