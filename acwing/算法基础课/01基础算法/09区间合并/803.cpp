#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
vector<PII> a, res;
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;
        a.push_back(make_pair(l, r));
    }
    sort(a.begin(), a.end());
    int st = a[0].first, ed = a[0].second;
    for (int i = 1; i < a.size(); i++)
        if (ed < a[i].first) {
            res.push_back(make_pair(st, ed));
            st = a[i].first, ed = a[i].second;
        } else {
            ed = max(ed, a[i].second);
        }
    res.push_back(make_pair(st, ed));
    cout << res.size();
    return 0;
}