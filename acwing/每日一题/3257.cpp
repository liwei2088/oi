#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x, p = 0, ans = 0;
    while (scanf("%d", &x) && x) {
        if (x == 1) {
            ans++;
            p = 0;
        } else if (x == 2) {
            p += 2;
            ans += p;
        }
    }
    printf("%d", ans);
    return 0;
}