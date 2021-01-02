#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 805, M = 3005, INF = 0x3f3f3f3f;
int n, p, c;
int h[N], e[M], ne[M], w[M], idx, d[N], num[N];
bool st[N];
queue<int> q;

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

void spfa(int x) {
    memset(d, 0x3f, sizeof(d));
    d[x] = 0;
    q.push(x);
    st[x] = true;
    while (q.size()) {
        int u = q.front();
        q.pop();
        st[u] = false;
        for (int i = h[u]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] > d[u] + w[i]) {
                d[j] = d[u] + w[i];
                if (!st[j]) {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
}

int main() {
    cin >> n >> p >> c;
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= n; i++) cin >> num[i];
    for (int i = 1; i <= c; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        add(a, b, w), add(b, a, w);
    }
    int ans = INF;
    for (int i = 1; i <= p; i++) {
        spfa(i);
        int s = 0;
        for (int j = 1; j <= n; j++) s += d[num[j]];
        ans = min(ans, s);
    }
    cout << ans;
    return 0;
}