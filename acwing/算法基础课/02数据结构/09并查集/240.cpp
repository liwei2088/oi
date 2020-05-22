#include <iostream>
using namespace std;
const int N = 50005;
// p数组保存并查集之间关系 d数组表示元素之间权值
//权值%3相同表示同类 权值%3=0 A 权值%3=1 B 权值%3=2 C
int p[N], d[N];
int n, m;

int find(int x) {
    if (p[x] != x) {
        int root = find(p[x]);
        d[x] = (d[x] + d[p[x]]) % 3;  //路径权值求和
        p[x] = root;                  //状态压缩
    }
    return p[x];
}

int main() {
    int ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i, d[i] = 0;
    while (m--) {
        int t, x, y, px, py;
        cin >> t >> x >> y;
        if (x > n || y > n)
            ans++;
        else {
            px = find(x), py = find(y);
            if (t == 1) {
                //同一个集合中 但权值%3不同 说明不是同类
                if (px == py && (d[x] - d[y] + 3) % 3)
                    ans++;
                else if (px != py) {  //不在同一个集合中
                    p[px] = py;       //合并两个集合
                    d[px] = (d[y] - d[x] + 3) % 3;
                }
            } else {
                if (px == py && (d[x] - d[y] - 1 + 3) % 3)
                    ans++;
                else if (px != py) {
                    p[px] = py;  //合并两个集合
                    d[px] = (d[y] + 1 - d[x] + 3) % 3;
                }
            }
        }
    }
    cout << ans;
    return 0;
}