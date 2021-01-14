#include <cstring>
#include <iostream>
using namespace std;
int n;
int h[105], e[10005], ne[10005], idx, d[105], q[105];

void topsort() {
    int hh = 0, tt = -1;
    for (int i = 1; i <= n; i++)
        if (!d[i]) q[++tt] = i;
    while (hh <= tt) {
        int t = q[hh++];
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            d[j]--;
            if (d[j] == 0) q[++tt] = j;
        }
    }
}

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int main() {
    cin >> n;
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= n; i++) {
        int j;
        while (cin >> j && j) {
            add(i, j);
            d[j]++;
        }
    }

    topsort();
    for (int i = 0; i < n; i++) cout << q[i] << " ";
    return 0;
}