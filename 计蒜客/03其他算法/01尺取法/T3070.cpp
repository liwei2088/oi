#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
const int N = 3e5 + 5;
vector<PII> a;
vector<int> v;
int n, s[N];

int find(int x) { return lower_bound(v.begin(), v.end(), x) - v.begin() + 1; }

//离散化+差分
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int l, r;
        scanf("%d%d", &l, &r);
        a.push_back(make_pair(l, r));
        v.push_back(l);
        v.push_back(r);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < n; i++) {
        int l = find(a[i].first), r = find(a[i].second);
        s[l]++, s[r + 1]--;
    }
    int ans = 0;
    for (int i = 1; i <= v.size(); i++) {
        s[i] += s[i - 1];
        ans = max(ans, s[i]);
    }
    printf("%d", ans);
    return 0;
}