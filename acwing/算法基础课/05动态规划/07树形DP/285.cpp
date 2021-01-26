#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
const int N = 6005;
int n, w[N];
//由于可能是森林 所以需要对节点判断是否存在父节点
bool fa[N];
// f[u][0]表示以u为根节点的子树并且不包括u的总快乐指数;
// f[u][1]表示以u为根节点的子树并且包括u的总快乐指数。 
int f[N][2];
vector<int> t[N];

void dfs(int u) {
    f[u][1] = w[u];
    for (int i = 0; i < t[u].size(); i++) {
        int v = t[u][i];
        dfs(v);
        //如果不选u 则u的孩子v 可以选也可以不选 则其中选择较大值返回
        f[u][0] += max(f[v][0], f[v][1]);
        //如果选u 则u的孩子v 一定不选， 则返回f[v][0]
        f[u][1] += f[v][0];
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;
        t[y].push_back(x);  // y是上司 x是下属 连线是y->x
        fa[x] = true;       //表示x存在父节点
    }
    int root = 1;             //假设1
    while (fa[root]) root++;  //找根节点
    dfs(root);
    cout << max(f[root][0], f[root][1]);
    return 0;
}