#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, k, a, b, c;
    long long s = 0;
    scanf("%d", &n);
    while (n--) {
        cin >> k;
        if (k == 1) {
            scanf("%d%d", &a, &b);
            s += 2 * (a + b);
        } else if (k == 2) {
            scanf("%d", &a);
            s += 4 * a;
        } else {
            scanf("%d%d%d", &a, &b, &c);
            s += a + b + c;
        }
    }
    printf("%lld", s);
    return 0;
}