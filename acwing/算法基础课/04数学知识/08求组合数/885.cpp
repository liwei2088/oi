#include <cstdio>
#include <iostream>
using namespace std;
const int N = 2005, MOD = 1e9 + 7;
int c[N][N];
int main() {
    for (int i = 0; i <= 2000; i++)
        for (int j = 0; j <= i; j++)
            if (!j)
                c[i][j] = 1;
            else
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;

    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", c[a][b]);
    }
    return 0;
}