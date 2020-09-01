#include <cstdio>
#include <iostream>
using namespace std;
long long n, g[20][20];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> g[i][j];
    long long mx = 0;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            mx = max(mx, g[i][j] + g[i + 1][j] + g[i][j + 1] + g[i + 1][j + 1]);
    printf("%.2lf", mx / 4.0);
    return 0;
}