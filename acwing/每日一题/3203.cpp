#include <cstdio>
#include <iostream>
using namespace std;
const int N = 105;
bool st[N][N];
int main() {
    int n, ans = 0;
    scanf("%d", &n);
    while (n--) {
        int x1, y1, x2, y2;
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                if (!st[i][j]) st[i][j] = true, ans++;
    }
    printf("%d", ans);
    return 0;
}