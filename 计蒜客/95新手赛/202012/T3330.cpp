#include <cstdio>
#include <iostream>
using namespace std;
int n, p;
long long f[100005];
int main() {
    scanf("%d%d", &n, &p);
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = (f[i - 1] * f[i - 1] + f[i - 2]) % p;
    }
    printf("%d", f[n]);
    return 0;
}