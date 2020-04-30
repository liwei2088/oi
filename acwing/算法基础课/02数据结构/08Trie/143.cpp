#include <iostream>
using namespace std;
// M表示trie中节点的数量 30*10^5
const int N = 1E5 + 5, M = 3e6 + 5;
int n, a[N];
int node[M][2], idx;

void insert(int x) {
    int p = 0;
    for (int i = 30; i >= 0; i--) {
        int b = x >> i & 1;                  //获取第i位的值
        if (!node[p][b]) node[p][b] = ++idx;  //如果节点不存在创建新的节点
        p = node[p][b];                      //指向下一个节点
    }
}

int query(int x) {
    int p = 0, res = 0;
    for (int i = 30; i >= 0; i--) {
        int b = x >> i & 1;
        if (node[p][!b]) {
            res += 1 << i;
            p = node[p][!b];
        } else
            p = node[p][b];
    }
    return res;
}
/*
    将所有的数转换为二进制，构建一个trie树
    搜索时，根据数字每一位走相反的岔路 例如 101 尽量走010
    这样结果最大
*/
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        insert(a[i]);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, query(a[i]));
    cout << ans << endl;
    return 0;
}