#include <cstdio>
#include <iostream>
using namespace std;

const int N = 100010, M = N * 21;

int n;
int a[N];
int tree[M][2], id[M], idx;

void insert(int x, int k) {
    int p = 0;
    for (int i = 20; i >= 0; i--) {  //从最高位开始处理
        int u = x >> i & 1;
        if (!tree[p][u]) tree[p][u] = ++idx;
        p = tree[p][u];
    }
    id[p] = k;
}

int query(int x) {
    int p = 0;
    for (int i = 20; i >= 0; i--) {
        int u = x >> i & 1;
        if (tree[p][!u])
            p = tree[p][!u];
        else
            p = tree[p][u];
    }
    return id[p];
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] ^= a[i - 1];  //异或和
    }
    int res = -1, l, r;  //[l,r]目标区间
    insert(a[0], 0);     //创建根节点
    for (int i = 1; i <= n; i++) {
        int k = query(a[i]);
        int t = a[i] ^ a[k];
        if (t > res) {
            res = t;
            l = k + 1;
            r = i;
        }
        insert(a[i], i);
    }
    cout << res << " " << l << " " << r << endl;
    return 0;
}