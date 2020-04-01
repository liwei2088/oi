#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
const int N = 3 * 1E5 + 5;
int n, m, a[N], s[N];
vector<int> alls;
vector<PII> add, query;

int find(int x) {
    return lower_bound(alls.begin(), alls.end(), x) - alls.begin() + 1;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x, c;
        cin >> x >> c;
        add.push_back(make_pair(x, c));
        alls.push_back(x);
    }
    for (int i = 1; i <= m; i++) {
        int l, r;
        cin >> l >> r;
        query.push_back(make_pair(l, r));
        alls.push_back(l);
        alls.push_back(r);
    }

    //离散化 1.排序 2.去重
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());
    //对应离散化的位置进行加法运算
    for (int i = 0; i < n; i++) {
        int x = find(add[i].first);
        a[x] += add[i].second;
    }
    //预处理前缀和
    for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
    //处理询问
    for (int i = 0; i < m; i++) {
        int l = find(query[i].first), r = find(query[i].second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}