#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int n, m, p[N];

//返回 x 的祖宗节点 + 路径压缩优化
int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) p[i] = i;
    while (m--) {
        char op[2];
        int a, b;
        cin >> op >> a >> b;
        if (op[0] == 'M')
            p[find(a)] = find(b);  //合并集合
        else {
            if (find(a) == find(b))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}