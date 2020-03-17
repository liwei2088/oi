#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int Max = 1e5 + 5;
vector<int> v[Max];     //存路径
int vis[Max], ans = 0;  // vis 用来标记状态
int dfs(int x) {
    int son = 0;  //计算子节点个数
    vis[x] = 1;
    for (int i = 0; i < v[x].size(); ++i) {
        if (!vis[v[x][i]]) {
            son += dfs(v[x][i]);  //对每个没搜过的节点搜，记录子树顶点。
        }
    }
    if ((son + 1) % 2 == 0)
        ans++;  //偶数点的就++，因为整棵树还要加上根节点1个，所以son要+1。
    return son + 1;
}
int main() {
    memset(vis, 0, sizeof(vis));
    int n, l, r;
    cin >> n;
    //如果总的节点数是奇数则一定不能分成两个偶数
    if (n % 2 == 1) {
        cout << "-1";
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        cin >> l >> r;
        v[l].push_back(r);
        v[r].push_back(l);
    }
    dfs(1);
    cout << ans - 1;
    return 0;
}