#include <iostream>
using namespace std;
const int N = 100005;
// head表示头结点
// e[i]表示节点i的值
// ne[i]表示节点i的next指针是多少
// idx 存储当前已经用到了哪个点
int head, e[N], ne[N], idx;

void init() {
    head = -1;
    idx = 1;
}
//将 x 插入到 head 之后
void add_to_head(int x) { e[idx] = x, ne[idx] = head, head = idx, idx++; }
//将 x 插入到第k个元素之后
void add(int k, int x) { e[idx] = x, ne[idx] = ne[k], ne[k] = idx, idx++; }
//将下标第k个元素后面的点删除
void remove(int k) { ne[k] = ne[ne[k]]; }

int main() {
    int m;
    cin >> m;
    init();
    while (m--) {
        int k, x;
        char op;
        cin >> op;
        if (op == 'H') {
            cin >> x;
            add_to_head(x);
        } else if (op == 'D') {
            cin >> k;
            if (!k) head = ne[head];  //当k等于0时，删除头结点
            remove(k);
        } else {
            cin >> k >> x;
            add(k, x);
        }
    }
    for (int i = head; i != -1; i = ne[i]) cout << e[i] << " ";
    return 0;
}