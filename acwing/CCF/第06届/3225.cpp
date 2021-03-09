/**
 * 解题思路：
 * 1.判断是否是连通图，可以使用并查集
 * 2.判断是会否存在欧拉路或者欧拉回路
 *   如果是欧拉路要求 所有点的度都是偶数 或者奇数的度只有2个 且1号点必须是奇数
 * 3. 求欧拉回路 DFS
 * 注意：由于需要输出字典序最小访问，按理需要排序
 *       程序中使用set 来存储 因为set自带排序效果 所以不需要单独排序
 */

#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
const int N = 10005, M = 100005;
int n, m;
int p[N];
set<int> g[N];
int ans[M], top;

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

void dfs(int u) {
    // set默认从小到大
    while (g[u].size()) {
        int t = *g[u].begin();
        g[u].erase(t), g[t].erase(u);
        dfs(t);
    }
    ans[++top] = u;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) p[i] = i;
    while (m--) {
        int a, b;
        scanf("%d%d", &a, &b);
        g[a].insert(b), g[b].insert(a);  //双向
        p[find(a)] = find(b);
    }
    int s = 0;
    //判断是否是一个连通图
    for (int i = 1; i <= n; i++) {
        if (find(i) != find(1)) {
            puts("-1");
            return 0;
        }
        if (g[i].size() % 2 == 1) s++;  //求度为奇数的点的个数
    }
    //度为奇数的点必须是2个或者是0个 如果是2个则1号点必须是奇数
    //判断是否存在欧拉回路
    if (s != 0 && s != 2 || s == 2 && g[1].size() % 2 == 0) {
        puts("-1");
        return 0;
    }
    dfs(1);
    for (int i = top; i; i--) printf("%d ", ans[i]);
    return 0;
}