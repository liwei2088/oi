#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 2005, M = 10005;
int n, m;
int h[N], e[M], ne[M], w[M], d[N], idx, cnt[N];
queue<int> q;
bool st[N];
void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool spfa() {
    memset(d, 0x3f3f3f3f, sizeof(d));
    for (int i = 1; i <= n; i++) {
        st[i] = true;
        q.push(i);
    }
    while (q.size()) {
        int t = q.front();
        q.pop();
        st[t] = false;
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] > d[t] + w[i]) {
                d[j] = d[t] + w[i];
                cnt[j]++;
                if (cnt[j] >= n) return true;
                if (!st[j]) {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
    return false;
}

int main() {
    memset(h, -1, sizeof(h));
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
    }
    if (spfa())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}