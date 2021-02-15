#include <cstdio>
#include <iostream>
using namespace std;

int qmi(int a, int b, int p) {
    int res = 1;
    a = a % p;
    while (b) {
        if (b & 1) res = (res * (long long)a) % p;
        a = (a * (long long)a) % p;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, p;
        scanf("%d%d", &a, &p);
        if (a % p == 0)
            puts("impossible");
        else
            printf("%d\n", qmi(a, p - 2, p));
    }
    return 0;
}