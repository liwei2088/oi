#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 200005;
int n, q[N], tt;
int main() {
    int x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        q[++tt] = x;
        if (tt >= 2 && (q[tt - 1] - q[tt]) % 2 == 0) tt -= 2;
    }
    if (tt <= 1)
        puts("YES");
    else
        puts("NO");
    return 0;
}