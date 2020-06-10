#include <iostream>
using namespace std;
const int N = 100010;
int n, m;
int h[N], cnt;

//堆中元素下降操作
void down(int u) {
    int t = u;
    //判断与左儿子的关系 如果大于左儿子 则下移到左边
    if (u * 2 <= cnt && h[u * 2] < h[t]) t = u * 2;
    //判断与右儿子的关系 如果大于左儿子 则下移到右边
    if (u * 2 + 1 <= cnt && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    //实现下移操作 u表示当前节点 t表示值最小的节点
    if (u != t) {  //一定要注意终止条件
        swap(h[u], h[t]);
        down(t); //递归下移
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> h[i];
    cnt = n;
    for (int i = n / 2; i; i--) down(i);
    while (m--) {
        cout << h[1] << " ";
        h[1] = h[cnt];
        cnt--;
        down(1);
    }
    return 0;
}