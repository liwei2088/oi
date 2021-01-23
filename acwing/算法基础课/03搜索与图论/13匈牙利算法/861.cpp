#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 505, M = 100005;
int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];
bool st[N];

void add(int a, int b) {
    e[++idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

bool find(int x) {
    for (int i = h[x]; i; i = ne[i]) {
        int j = e[i];
        if (!st[j]) {
            st[j] = true;
            if (match[j] == 0 || find(match[j])) {
                match[j] = x;
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin >> n1 >> n2 >> m;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    int ans = 0;
    for (int i = 1; i <= n1; i++) {
        memset(st, 0, sizeof(st));
        if (find(i)) ans++;
    }

    cout << ans;
    return 0;
}