#include <cstdio>
#include <iostream>
using namespace std;
const int N = 505;
int n, a[N][N];
bool st[N][N];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) scanf("%d", &a[i][j]);

    int x = 1, y = 1, tot = 1;
    printf("%d ", a[x][y]);
    while (tot < n * n) {
        //如果左侧可以移动走一个格子
        if (y + 1 <= n && !st[x][y + 1])
            y++, tot++, st[x][y] = true, printf("%d ", a[x][y]);
        //如果斜下角可以走
        while (y - 1 >= 1 && x + 1 <= n && !st[x + 1][y - 1])
            x++, y--, tot++, st[x][y] = true, printf("%d ", a[x][y]);
        //如果可以向下运动，则向下移动
        if (x + 1 <= n && !st[x + 1][y])
            x++, tot++, st[x][y] = true, printf("%d ", a[x][y]);
        //如果斜上角可以走
        while (x - 1 >= 1 && y + 1 <= n && !st[x - 1][y + 1])
            x--, y++, tot++, st[x][y] = true, printf("%d ", a[x][y]);
    }
    return 0;
}