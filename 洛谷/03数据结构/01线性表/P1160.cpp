#include <iostream>
using namespace std;
const int N = 100005;
int n, m, e[N], l[N], r[N], idx;

//初始化双向链表  注意 0下标表示左边界 1下标表示右边界
//数据全部在0~1之间，所以要注意数据下标从2开始
void init() {
    r[0] = 1;
    l[1] = 0;
    idx = 2;
}

//由于数据下标从2开始所以插入和删除的节点下标+1
void add(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    idx++;
}

void remove(int k) {
    if (l[k] == -1 && r[k] == -1) return;
    r[l[k]] = r[k];
    l[r[k]] = l[k];
    l[k] = -1, r[k] = -1;
}

int main() {
    cin >> n;
    init();     //初始化双向链表
    add(0, 1);  //默认插入第一个元素
    for (int i = 2; i <= n; i++) {
        int k, p;
        cin >> k >> p;
        if (p)
            add(k + 1, i);
        else
            add(l[k + 1], i);
    }
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        remove(x + 1);
    }
    for (int i = r[0]; i != 1; i = r[i]) cout << e[i] << " ";
    return 0;
}