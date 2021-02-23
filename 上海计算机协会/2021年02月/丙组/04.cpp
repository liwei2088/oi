#include <cstdio>
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (!b)
        return a;
    else
        gcd(b, a % b);
}
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int ans = m - 1 - (gcd(m, n) - 1);
    printf("%d", ans);
    return 0;
}