#include <iostream>
using namespace std;
const int N = 105;
typedef pair<int, int> PII;
PII a[N];
int p[N], n;

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
        p[i] = i;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++) {
            int fi = find(i), fj = find(j);
            if (a[i].first == a[j].first || a[i].second == a[j].second)
                p[fi] = fj;
        }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (p[i] == i) ans++;
    cout << ans - 1;
    return 0;
}