#include <cstring>
#include <iostream>
#include <queue>
using namespace std;
const int N = 100005;
int n, m;
int h[N], e[N], ne[N], w[N], d[N], idx;
bool st[N];
queue<int> q;

void add(int a, int b, int c) {
    e[idx] = b;
    ne[idx] = h[a];
    w[idx] = c;
    h[a] = idx++;
}

void spfa() {
    memset(d, 0x3f3f3f3f, sizeof(d));
    d[1] = 0;
    q.push(1);
    st[1] = true;
    while (q.size()) {
        int t = q.front();
        q.pop();
        st[t] = false;
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[j] > d[t] + w[i]) {
                d[j] = d[t] + w[i];
                if (!st[j]) {
                    q.push(j);
                    st[j] = true;
                }
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }
    spfa();
    if (d[n] == 0x3f3f3f3f)
        cout << "impossible";
    else
        cout << d[n];
    return 0;
}