#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10005, M = 100005;
int n, m;
int h[N], e[M], ne[M], idx;
int dfn[N], low[N];
int stk[N], top, ts;
bool in_stk[N];
int ans;

void add(int a, int b) {
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}

void tarjan(int u) {
    dfn[u] = low[u] = ++ts;             //记录搜索的序号
    stk[++top] = u, in_stk[u] = true;   //入栈
    for (int i = h[u]; i; i = ne[i]) {  //遍历所有邻接点
        int v = e[i];
        if (!dfn[v]) {  //如果没有访问过， 则DFS搜索
            tarjan(v);
            low[u] = min(low[u], low[v]);  //回溯 更新low值
        } else if (in_stk[v]) {            //如果已经访问 则一定是环
            low[u] = min(low[u], dfn[v]);
        }
    }
    //求强连通分量中所有点都是可以互相访问的
    if (dfn[u] == low[u]) {  // u是强连通分量的根节点
        int y, cnt = 0;      // cnt是强联通分量中的节点个数
        do {
            y = stk[top--];
            in_stk[y] = false;
            cnt++;
        } while (y != u);
        ans += cnt * (cnt - 1) / 2;  //因为[2,3][3,2]算一个，所以/2
    }
}

int main() {
    scanf("%d%d", &n, &m);
    while (m--) {
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b);
    }
    for (int i = 1; i <= n; i++)
        if (!dfn[i]) tarjan(i);
    printf("%d\n", ans);
    return 0;
}