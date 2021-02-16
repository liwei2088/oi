#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        //分解质因数
        int ans = x;
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                ans = ans / i * (i - 1);
                while (x % i == 0) x /= i;
            }
        }
        if (x > 1) ans = ans / x * (x - 1);
        printf("%d\n", ans);
    }
    return 0;
}