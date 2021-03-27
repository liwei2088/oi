#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
using namespace std;
int n, porder[35], iorder[35];
map<int, int> l, r, pos;

int work(int pl, int pr, int il, int ir) {
    int root = porder[pr];
    int k = pos[root];
    if (il < k) l[root] = work(il, k - 1, pl, pl + k - 1 - il);
    if (ir > k) r[root] = work(k + 1, ir, pl + k - il, pr - 1);
    return root;
}

void bfs(int root) {
    queue<int> q;
    q.push(root);
    while (q.size()) {
        int f = q.front();
        q.pop();
        cout << f << " ";
        if (l.count(f)) q.push(l[f]);
        if (r.count(f)) q.push(r[f]);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> porder[i];
    for (int i = 1; i <= n; i++) {
        cin >> iorder[i];
        pos[iorder[i]] = i;
    }
    int root = work(1, n, 1, n);
    bfs(root);
    return 0;
}