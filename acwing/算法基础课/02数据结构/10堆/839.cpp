#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100010;
int n, m;
int h[N], ph[N], hp[N], cur_size;

/*
    h 表示堆中数据序列
    hp 表示原输入数据序列，hp[k]表示第k个插入值在h中的位置
    ph[k] 表示堆中第k个元素在原输入序列中的位置
    当堆中元素移动位置时，除了调整h hp外 还需要调整ph
*/
void heap_swap(int u, int v) {
    swap(h[u], h[v]);
    swap(hp[u], hp[v]);
    swap(ph[hp[u]], ph[hp[v]]);
}

void down(int u) {
    int t = u;
    if (u * 2 <= cur_size && h[u * 2] < h[t]) t = u * 2;
    if (u * 2 + 1 <= cur_size && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    if (u != t) {
        heap_swap(u, t);
        down(t);
    }
}

void up(int u) {
    if (u / 2 > 0 && h[u / 2] > h[u]) {
        heap_swap(u, u / 2);
        up(u >> 1);
    }
}

int main() {
    int n;
    cin >> n;
    int m = 0;
    while (n--) {
        string op;
        int k, x;
        cin >> op;
        if (op == "I") {
            cin >> x;
            m++;
            h[++cur_size] = x;  //新元素放入到堆的最后一个位置
            ph[m] =
                cur_size;  //记录当前插入的元素是第m个 指向h中的第cur_size位置
            hp[cur_size] = m;  //同理 hp存储堆中第cur_size个元素在ph中的位置m
            up(cur_size);  //上移
        } else if (op == "PM") {
            cout << h[1] << endl;
        } else if (op == "DM") {  //删除堆顶元素 让最后一个元素替换堆顶元素
            heap_swap(1, cur_size);
            cur_size--;
            down(1);
        } else if (op == "D") {  //删除操作将第k个元素和最后一个元素交换
            cin >> k;
            int u = ph[k];  //一定要保存待交换的位置，后面要进行上移和下移
            heap_swap(u, cur_size);
            cur_size--;
            up(u);
            down(u);
        } else if (op == "C") {
            cin >> k >> x;
            int u = ph[k];
            h[u] = x;
            down(u);
            up(u);
        }
    }
    return 0;
}