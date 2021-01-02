#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int l, r;
    scanf("%d%d", &l, &r);
    long long s = 0;
    for (int i = l; i <= r; i++) {
        int t = i;
        while (t) {
            s += t % 10;
            t /= 10;
        }
    }
    printf("%lld", s);
    return 0;
}