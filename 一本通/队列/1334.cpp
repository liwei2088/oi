#include <iostream>
using namespace std;

int n, m;
int q[110];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) q[i] = i + 1;
    q[n] = 1;
    // j从 n开始的原因是， 删除元素必须获取链表的前一个元素位置
    //所以程序其实并没有直接用j来表示被删除的节点，而是删除节点的前一个节点
    int t = 0, k = 1, j = n;
    while (t != n) {
        while (k < m) {
            j = q[j];
            k++;
        }
        cout << q[j] << " ";
        t++;
        q[j] = q[q[j]];
        k = 1;
    }
    return 0;
}