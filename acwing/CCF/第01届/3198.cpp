#include <cstdio>
#include <iostream>
using namespace std;

/**
 * 考核顺序表的基本操作
 */

const int N = 15;
struct node {
    int xh, x1, y1, x2, y2;
} a[N];
int n, m;

int get(int x, int y) {
    for (int i = n; i >= 1; i--) {
        if (x >= a[i].x1 && y >= a[i].y1 && x <= a[i].x2 && y <= a[i].y2) {
            return i;
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].x2 >> a[i].y2;
        a[i].xh = i;
    }
    while (m--) {
        int x, y;
        cin >> x >> y;
        int k = get(x, y);
        if (!k) {
            cout << "IGNORED" << endl;
            continue;
        }
        cout << a[k].xh << endl;  //输出找到的窗口序号
        //将[n,k+1]向下移动一层，将k放置到最高层
        node t = a[k];
        for (int i = k + 1; i <= n; i++) a[i - 1] = a[i];
        a[n] = t;
    }
    return 0;
}